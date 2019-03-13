#!/bin/bash

set -e

export MLSDK="${MLSDK:/home/chris/github/test-toolchain}"

git checkout base-11.6.0
./configure
make -j4
cp out/Release/torque .

git checkout 11.6.0

rm -Rf out
#../magicleap-js/hack-toolchain.js
#./configure
./android-configure
make -j4


#rm -f libnode.a
"/home/chris/github/test-toolchain/bin/aarch64-linux-android-ar" -M <libnode.mri
