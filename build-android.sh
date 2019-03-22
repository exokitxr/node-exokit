#!/bin/bash

export toolchain='/home/a/android-ndk-r19c/toolchains/aarch64-linux-android-4.9/prebuilt/linux-x86_64'

git checkout base-11.6.0
./configure
make 
cp out/Release/torque .

git checkout 11.6.0-android

# rm -Rf out
./android-configure
make -j4

rm -f libnode.a
"$toolchain/bin/aarch64-linux-android-ar" -M <libnode.mri
