#!/bin/bash

export toolchain='/home/a/sdk/ndk-bundle/toolchain'

git checkout base-12.2.0
./configure
make -j4
cp out/Release/{bytecode_builtins_list_generator,genccode,genrb,iculslocs,icupkg,openssl-cli,torque} .

git checkout 12.2.0-android

# rm -Rf out
./android-configure
make -j4

# LD_PRELOAD=libc++_shared.so ./mksnapshot --turbo_instruction_scheduling --embedded_variant Default --embedded_src embedded.S --startup_src snapshot.cc
# cp snapshot.cc "/home/a/node-exokit/out/Release/obj.target/generate_snapshot/geni/snapshot.cc"; cp embedded.S "/home/a/node-exokit/out/Release/obj.target/generate_snapshot/geni/embedded.S";

rm -f libnode.a
"$toolchain/bin/aarch64-linux-android-ar" -M <libnode.mri
