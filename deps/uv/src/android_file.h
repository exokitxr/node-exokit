#include <uv.h>
#include <android/asset_manager.h>

void initAssetManager(JNIEnv *env, jobject assetManager);

extern std::map<int, AAsset *> androidAssets;
extern int androidAssetId = 0x80000000;

// FILE* android_fopen(const char* fname, const char* mode);
