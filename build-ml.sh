#!/bin/bash

./android-configure

cp /mnt/c/Users/avaer/Documents/GitHub/node2/out/Release/torque /mnt/c/Users/avaer/Documents/GitHub/node/out/Release/torque

find . -type f -name '*.d' -exec sed -i 's/C:\\/\/mnt\/c\//g' "{}" +;
find . -type f -name '*.d' -exec sed -i 's/C:/\/mnt\/c\//g' "{}" +;
find . -type f -name '*.d' -exec sed -i 's/\([^ ]\)\\/\1\//g' "{}" +;

make -j4

rm -Rf libnode.a
/mnt/c/Users/avaer/MagicLeap/mlsdk/v0.16.0/tools/toolchains/bin/aarch64-linux-android-ar -M <libnode.mri