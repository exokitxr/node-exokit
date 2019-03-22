#include <uv.h>
#include <jni.h>
#include <android/asset_manager.h>

extern AAssetManager *android_asset_manager;
void initAssetManager(JNIEnv *env, jobject assetManager);

int android_access(const char *pathname, int mode);
int android_chmod(const char *pathname, mode_t mode);
int android_chown(const char *pathname, uid_t owner, gid_t group);
int android_close(int fd);
ssize_t android_copyfile(uv_fs_t* req);
int android_fchmod(int fd, mode_t mode);
int android_fchown(int fd, uid_t owner, gid_t group);
int lchown(const char *path, uid_t owner, gid_t group);
ssize_t android_fdatasync(uv_fs_t* req);
int android_fstat(const char *path, uv_stat_t *buf);
ssize_t android_fsync(uv_fs_t* req);
int android_ftruncate(int fd, off_t length);
ssize_t android_futime(uv_fs_t* req);
int android_lstat(const char *path, uv_stat_t *buf);
int android_link(const char *oldpath, const char *newpath);
int android_mkdir(const char *pathname, mode_t mode);
char *android_mkdtemp(char *templ);
ssize_t android_open(uv_fs_t* req);
ssize_t android_read(uv_fs_t* req);
ssize_t android_scandir(uv_fs_t* req);
ssize_t android_readlink(uv_fs_t* req);
ssize_t android_realpath(uv_fs_t* req);
int android_rename(const char *oldpath, const char *newpath);
int android_rmdir(const char *path);
ssize_t android_sendfile(uv_fs_t* req);
int android_stat(const char *path, uv_stat_t *buf);
int android_symlink(const char *target, const char *linkpath);
int android_unlink(const char *pathname);
ssize_t android_utime(uv_fs_t* req);
ssize_t android_write_all(uv_fs_t* req);
