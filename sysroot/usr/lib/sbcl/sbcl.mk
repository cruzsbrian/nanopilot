CC=cc
LD=ld
CFLAGS=-g -O2 -fdebug-prefix-map=/build/sbcl-HzztKY/sbcl-1.4.5=. -fstack-protector-strong -Wformat -Werror=format-security -g -Wall -Wundef -Wsign-compare -Wpointer-arith -O3 -marm -march=armv5 -D_LARGEFILE_SOURCE -D_LARGEFILE64_SOURCE -D_FILE_OFFSET_BITS=64 -fno-pie
ASFLAGS=-g -O2 -fdebug-prefix-map=/build/sbcl-HzztKY/sbcl-1.4.5=. -fstack-protector-strong -Wformat -Werror=format-security -g -Wall -Wundef -Wsign-compare -Wpointer-arith -O3 -marm -march=armv5 -D_LARGEFILE_SOURCE -D_LARGEFILE64_SOURCE -D_FILE_OFFSET_BITS=64 -fno-pie
LINKFLAGS=-g -no-pie
LDFLAGS=-Wl,-Bsymbolic-functions -Wl,-z,relro -no-pie
__LDFLAGS__= -no-pie
LIBS=-ldl -lz -lm
