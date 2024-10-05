#!/bin/sh
export PATH=/usr/local/msvc64/bin:$PATH
echo PATH=${PATH}
./configure --host=x86_64-w64-mingw32 --prefix=/usr/local/msvc64 \
            CC="${PWD}/build-aux/compile cl -nologo" \
            CFLAGS="-MD" \
            CXX="${PWD}/build-aux/compile cl -nologo" \
            CXXFLAGS="-MD" \
            CPPFLAGS="-D_WIN32_WINNT=_WIN32_WINNT_WIN10 -I/usr/local/msvc64/include" \
            LDFLAGS="-L/usr/local/msvc64/lib" \
            LD="link" \
            NM="dumpbin -symbols" \
            STRIP=":" \
            AR="${PWD}/build-aux/ar-lib lib" \
            RANLIB=":"
