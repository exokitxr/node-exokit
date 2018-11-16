#!/bin/bash

git checkout base
./configure
make -j4
cp out/Release/torque .

git checkout 11.2.0

rm -Rf out
../magicleap-js/hack-toolchain.js
./android-configure
make -j4

cp -f torque out/Release/
find . -type f -name '*.d' -exec sed -i 's/C:\\/\/mnt\/c\//g' "{}" +;
find . -type f -name '*.d' -exec sed -i 's/C:/\/mnt\/c\//g' "{}" +;
find . -type f -name '*.d' -exec sed -i 's/\([^ ]\)\\/\1\//g' "{}" +;
git checkout src/v8ustack.d
make -j4

rm -Rf libnode.a
/mnt/c/Users/avaer/MagicLeap/mlsdk/v0.16.0/tools/toolchains/bin/aarch64-linux-android-ar -M <libnode.mri