#!/bin/bash

# XXX fill this in with your ndk toolchain
export toolchain='/home/a/sdk/ndk-bundle/toolchain'

# build build tools
git checkout 11.15.0-base
./configure
make -j4
cp out/Release/{genccode,genrb,iculslocs,icupkg,openssl-cli,torque} .

# build node
git checkout 11.15.0
rm -Rf out
./android-configure
make
# note: the above will fail due to torque architecture mismatch; copy torque into place and build again
cp torque out/Release/torque
make

# LD_PRELOAD=libc++_shared.so ./mksnapshot --turbo_instruction_scheduling --embedded_variant Default --embedded_src embedded.S --startup_src snapshot.cc
# cp snapshot.cc "/home/a/node-exokit/out/Release/obj.target/generate_snapshot/geni/snapshot.cc"; cp embedded.S "/home/a/node-exokit/out/Release/obj.target/generate_snapshot/geni/embedded.S";

# build libnode.a
rm -f libnode.a
"$toolchain/bin/aarch64-linux-android-ar" -M <libnode.mri
