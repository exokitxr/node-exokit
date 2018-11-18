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
read -r -d '' s <<lol
process.argv.slice(1).forEach(p => {fs.writeFileSync(p, (x=fs.readFileSync(p, 'utf8').replace(/\r\n/gm, '\n').replace(/\r/gm, '\n'), y=x.replace(/([\\\\\/][_\-\.a-zA-Z0-9]+)\n(:)/gm, (all,
a, b) => a + b).replace(/(\.?[a-zA-Z]+):/g, (all, a) => /^[a-zA-Z]$/.test(a) ? ('/mnt/' + a.toLowerCase() + '/') : all).replace(/\/+/gm, '/')))})
lol
find out -type f -name '*.d' -exec node -e "$s" "{}" +;
# f=ares_getopt.o.d
# find out -type f -name '*.d' -exec mac2unix "{}" +;
# find out -type f -name '*.d' -exec sed -i 's/\([^ ]\)\\/\1\//g' "{}" +;
# find out -type f -name '*.d' -exec sed -i 's/\(^\|[^\.]\|[^\.][^\.]\)c:/\1\/mnt\/c\//g' "{}" +;
# find out -type f -name "$f" -exec sed -i ':a;N;$!ba;s/\\\n:\n/\n/g' "{}" +;
# find out -type f -name '*.d' -exec sed -i ':a;N;$!ba;s/\(\.[a-z]+\)\n:/\1:/g' "{}" +;
# git checkout src/v8ustack.d
make -j4

rm -Rf libnode.a
/mnt/c/Users/avaer/MagicLeap/mlsdk/v0.16.0/tools/toolchains/bin/aarch64-linux-android-ar -M <libnode.mri