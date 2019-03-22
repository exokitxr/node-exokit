#include "android_file.h"

#include <vector>
#include <map>

#ifdef __cplusplus
extern "C" {
#endif

AAssetManager *android_asset_manager = nullptr;
void initAssetManager(JNIEnv *env, jobject assetManager) {
  android_asset_manager = AAssetManager_fromJava(env, assetManager);
}

std::map<int, AAsset *> androidAssets;
int androidAssetId = 0x80000000;
std::vector<uv__dirent_t> scandirDirents;
const uint64_t blockSize = 4096;

bool startsWith(const char *pre, const char *str) {
  return strncmp(pre, str, strlen(pre)) == 0;
}
bool isPackagePath(const char *p) {
  return startsWith("/package", p);
}
const char *getPackageSubpath(const char *p) {
  return p + (sizeof("/package")-1);
}

int android_access(const char *pathname, int mode) {
  if (isPackagePath(pathname)) {
    const char *subpath = getPackageSubpath(pathname);
    AAsset* asset = AAssetManager_open(android_asset_manager, subpath, AASSET_MODE_UNKNOWN);
    if (asset) {
      AAsset_close(asset);
      return 0;
    } else {
      AAssetDir *assetDir = AAssetManager_openDir(android_asset_manager, subpath);
      if (assetDir) {
        AAssetDir_close(assetDir);
        return 0;
      } else {
        errno = EACCES;
        return -1;
      }
    }
  } else {
    return access(pathname, mode);
  }
}

int android_chmod(const char *pathname, mode_t mode) {
  if (isPackagePath(pathname)) {
    errno = EACCES;
    return -1;
  } else {
    return chmod(pathname, mode);
  }
}

int android_chown(const char *pathname, uid_t owner, gid_t group) {
  if (isPackagePath(pathname)) {
    errno = EACCES;
    return -1;
  } else {
    return chown(pathname, owner, group);
  }
}

int android_close(int fd) {
  auto iter = androidAssets.find(fd);
  if (iter != androidAssets.end()) {
    AAsset *asset = iter->second;
    AAsset_close(asset);
    androidAssets.erase(iter);
    return 0;
  } else {
    return close(fd);
  }
}

ssize_t android_copyfile(uv_fs_t* req) {
  const char *pathname = req->path;
  if (isPackagePath(pathname)) {
    errno = ENOTSUP;
    return -1;
  } else {
    return uv__fs_copyfile(req);
  }
}

int android_fchmod(int fd, mode_t mode) {
  auto iter = androidAssets.find(fd);
  if (iter != androidAssets.end()) {
    errno = EACCES;
    return -1;
  } else {
    return fchmod(fd, mode);
  }
}

int android_fchown(int fd, uid_t owner, gid_t group) {
  auto iter = androidAssets.find(fd);
  if (iter != androidAssets.end()) {
    errno = EACCES;
    return -1;
  } else {
    return fchown(fd, owner, group);
  }
}

int android_lchown(const char *path, uid_t owner, gid_t group) {
  if (isPackagePath(path)) {
    errno = EACCES;
    return -1;
  } else {
    return lchown(path, owner, group);
  }
}

ssize_t android_fdatasync(uv_fs_t* req) {
  int fd = req->file;
  auto iter = androidAssets.find(fd);
  if (iter != androidAssets.end()) {
    errno = EACCES;
    return -1;
  } else {
    return uv__fs_fdatasync(req);
  }
}

int android_fstat(int fd, uv_stat_t *buf) {
  auto iter = androidAssets.find(fd);
  if (iter != androidAssets.end()) {
    AAsset* asset = iter->second;

    if (asset) { // XXX handle directory case
      uint64_t size = AAsset_getLength64(asset);

      memset(buf, 0, sizeof(*buf));

      // buf->st_dev = 0;
      buf->st_dev = 0;
      buf->st_mode = S_IFREG;
      buf->st_nlink = 1;
      buf->st_uid = 0;
      buf->st_gid = 0;
      // buf->st_rdev = 0;
      buf->st_ino = 1;
      buf->st_size = size;
      buf->st_blksize = size/blockSize;
      buf->st_blocks = 1;
      // buf->st_flags = 0;
      // buf->st_gen = 0;
      // buf->st_atim = uv_timespec_t{0,0};
      // buf->st_mtim = uv_timespec_t{0,0};
      // buf->st_ctim = uv_timespec_t{0,0};
      // buf->st_birthtim = uv_timespec_t{0,0};

      return 0;
    } else { // XXX handle directories
      AAssetDir *assetDir = AAssetManager_openDir(android_asset_manager, nullptr);
      if (assetDir) {
        memset(buf, 0, sizeof(*buf));

        // buf->st_dev = 0;
        buf->st_dev = 0;
        buf->st_mode = S_IFDIR;
        buf->st_nlink = 1;
        buf->st_uid = 0;
        buf->st_gid = 0;
        // buf->st_rdev = 0;
        buf->st_ino = 1;
        buf->st_size = blockSize;
        buf->st_blksize = blockSize;
        buf->st_blocks = 1;
        // buf->st_flags = 0;
        // buf->st_gen = 0;
        // buf->st_atim = uv_timespec_t{0,0};
        // buf->st_mtim = uv_timespec_t{0,0};
        // buf->st_ctim = uv_timespec_t{0,0};
        // buf->st_birthtim = uv_timespec_t{0,0};

        return 0;
      } else {
        errno = ENOENT;
        return -1;
      }
    }
  } else {
    return uv__fs_fstat(fd, buf);
  }
}

ssize_t android_fsync(uv_fs_t* req) {
  int fd = req->file;
  auto iter = androidAssets.find(fd);
  if (iter != androidAssets.end()) {
    errno = EACCES;
    return -1;
  } else {
    return uv__fs_fsync(req);
  }
}

int android_ftruncate(int fd, off_t length) {
  auto iter = androidAssets.find(fd);
  if (iter != androidAssets.end()) {
    errno = EACCES;
    return -1;
  } else {
    return ftruncate(fd, length);
  }
}

ssize_t android_futime(uv_fs_t* req) {
  int fd = req->file;
  auto iter = androidAssets.find(fd);
  if (iter != androidAssets.end()) {
    errno = EACCES;
    return -1;
  } else {
    return uv__fs_futime(req);
  }
}

int android_lstat(const char *path, uv_stat_t *buf) {
  if (isPackagePath(path)) {
    const char *subpath = getPackageSubpath(path);
    AAsset* asset = AAssetManager_open(android_asset_manager, subpath, AASSET_MODE_UNKNOWN);
    if (asset) {
      int fd = androidAssetId++;
      androidAssets[fd] = asset;

      int result = android_fstat(fd, buf);

      AAsset_close(asset);
      androidAssets.erase(fd);

      return result;
    } else {
      AAssetDir *assetDir = AAssetManager_openDir(android_asset_manager, nullptr);
      int fd = androidAssetId++;
      androidAssets[fd] = nullptr; // XXX

      int result = android_fstat(fd, buf);

      AAssetDir_close(assetDir);
      androidAssets.erase(fd);

      return result;
    }
  } else {
    return uv__fs_lstat(path, buf);
  }
}

int android_link(const char *oldpath, const char *newpath) {
  if (isPackagePath(oldpath) || isPackagePath(newpath)) {
    errno = EACCES;
    return -1;
  } else {
    return link(oldpath, newpath);
  }
}

int android_mkdir(const char *pathname, mode_t mode) {
  if (isPackagePath(pathname)) {
    errno = EACCES;
    return -1;
  } else {
    return mkdir(pathname, mode);
  }
}

ssize_t android_mkdtemp(uv_fs_t* req) {
  return uv__fs_mkdtemp(req);
}

ssize_t android_open(uv_fs_t* req) {
  const char *pathname = req->path;
  if (isPackagePath(pathname)) {
    const char *subpath = getPackageSubpath(pathname);
    AAsset* asset = AAssetManager_open(android_asset_manager, subpath, AASSET_MODE_UNKNOWN);
    if (asset) {
      int fd = androidAssetId++;
      androidAssets[fd] = asset;
      return fd;
    } else {
      errno = ENOENT;
      return -1;
    }
  } else {
    return uv__fs_open(req);
  }
}

ssize_t android_read(uv_fs_t* req) {
  int fd = req->file;
  auto iter = androidAssets.find(fd);
  if (iter != androidAssets.end()) {
    AAsset *asset = iter->second;

    unsigned int iovmax = uv__getiovmax();
    if (req->nbufs > iovmax) {
      req->nbufs = iovmax;
    }

    if (req->off >= 0) {
      AAsset_seek(asset, req->off, SEEK_SET);
    }

    int result;
    for (unsigned int i = 0; i < req->nbufs; i++) {
      int readResult = AAsset_read(asset, req->bufs[i].base, req->bufs[i].len);
      if (readResult > 0) {
        result += readResult;
      } else {
        return readResult;
      }
    }
    return result;
  } else {
    return uv__fs_read(req);
  }
}

ssize_t android_scandir(uv_fs_t* req) {
  const char *pathname = req->path;
  if (pathname) {
    const char *subpath = getPackageSubpath(pathname);
    AAssetDir *assetDir = AAssetManager_openDir(android_asset_manager, subpath);
    if (assetDir) {
      scandirDirents.clear();

      for (;;) {
        const char *filename = AAssetDir_getNextFileName(assetDir);
        if (filename) {
          uv__dirent_t dirent;
          dirent.d_ino = 1;
          dirent.d_off = scandirDirents.size();
          dirent.d_reclen = sizeof(dirent);
          strncpy(dirent.d_name, filename, sizeof(dirent.d_name));

          scandirDirents.push_back(dirent);
        } else {
          break;
        }
      }

      std::sort(scandirDirents.begin(), scandirDirents.end(), [](const uv__dirent_t &a, const uv__dirent_t &b) {
        const uv__dirent_t *ap = &a;
        const uv__dirent_t *bp = &b;
        return uv__fs_scandir_sort(&ap, &bp);
      });

      req->ptr = scandirDirents.data();
      req->nbufs = 0;

      return scandirDirents.size();
    } else {
      errno = ENOENT;
      return -1;
    }
  } else {
    return uv__fs_scandir(req);
  }
}

ssize_t android_readlink(uv_fs_t* req) {
  const char *pathname = req->path;
  if (isPackagePath(pathname)) {
    const char *subpath = getPackageSubpath(pathname);
    AAsset* asset = AAssetManager_open(android_asset_manager, subpath, AASSET_MODE_UNKNOWN);
    if (asset) {
      AAsset_close(asset);

      errno = EINVAL;
      return -1;
    } else {
      errno = ENOENT;
      return -1;
    }
  } else {
    return uv__fs_readlink(req);
  }
}

ssize_t android_realpath(uv_fs_t* req) {
  const char *pathname = req->path;
  if (isPackagePath(pathname)) {
    ssize_t len = uv__fs_pathmax_size(req->path);
    char* buf = (char *)uv__malloc(len + 1);

    req->ptr = buf;

    return 0;
  } else {
    return uv__fs_realpath(req);
  }
}

int android_rename(const char *oldpath, const char *newpath) {
  if (isPackagePath(oldpath) || isPackagePath(newpath)) {
    errno = EACCES;
    return -1;
  } else {
    return rename(oldpath, newpath);
  }
}

int android_rmdir(const char *path) {
  if (isPackagePath(path)) {
    errno = EACCES;
    return -1;
  } else {
    return rmdir(path);
  }
}

ssize_t android_sendfile(uv_fs_t* req) {
  int in_fd = req->flags;
  int out_fd = req->file;

  auto iter1 = androidAssets.find(out_fd);
  auto iter2 = androidAssets.find(in_fd);
  if (iter1 != androidAssets.end() || iter2 != androidAssets.end()) {
    errno = EACCES;
    return -1;
  } else {
    return uv__fs_sendfile(req);
  }
}

int android_stat(const char *path, uv_stat_t *buf) {
  if (isPackagePath(path)) {
    errno = EACCES;
    return -1;
  } else {
    return uv__fs_stat(path, buf);
  }
}

int android_symlink(const char *target, const char *linkpath) {
  if (isPackagePath(target) || isPackagePath(linkpath)) {
    errno = EACCES;
    return -1;
  } else {
    return symlink(target, linkpath);
  }
}

int android_unlink(const char *pathname) {
  if (isPackagePath(pathname)) {
    errno = EACCES;
    return -1;
  } else {
    return unlink(pathname);
  }
}

ssize_t android_utime(uv_fs_t* req) {
  const char *pathname = req->path;
  if (isPackagePath(pathname)) {
    errno = EACCES;
    return -1;
  } else {
    return uv__fs_utime(req);
  }
}

ssize_t android_write_all(uv_fs_t* req) {
  int fd = req->file;
  auto iter = androidAssets.find(fd);
  if (iter != androidAssets.end()) {
    errno = EACCES;
    return -1;
  } else {
    return uv__fs_write_all(req);
  }
}

/* FILE* android_fopen(const char* fname, const char* mode) {
  if(mode[0] == 'w') return NULL;

  AAsset* asset = AAssetManager_open(android_asset_manager, fname, 0);
  if(!asset) return NULL;

  return funopen(asset, android_read, android_write, android_seek, android_close);
}

static int android_read(void* cookie, char* buf, int size) {
  return AAsset_read((AAsset*)cookie, buf, size);
}

static int android_write(void* cookie, const char* buf, int size) {
  return EACCES; // can't provide write access to the apk
}

static fpos_t android_seek(void* cookie, fpos_t offset, int whence) {
  return AAsset_seek((AAsset*)cookie, offset, whence);
}

static int android_close(void* cookie) {
  AAsset_close((AAsset*)cookie);
  return 0;
} */

#ifdef __cplusplus
}
#endif
