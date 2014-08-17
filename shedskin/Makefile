SHEDSKIN_LIBDIR=/opt/local/Library/Frameworks/Python.framework/Versions/2.7/lib/python2.7/site-packages/shedskin/lib
CC=g++
CCFLAGS=-O2 -Wno-deprecated $(CPPFLAGS) -I. -I${SHEDSKIN_LIBDIR} -I/usr/local/include -I/opt/local/include
LFLAGS=-lgc -lpcre $(LDFLAGS) -L/opt/local/lib -L/usr/local/lib

CPPFILES=/Users/denislavrov/Desktop\ Groups/Misceleneous\ Projects/codec/shedskin/codec.cpp \
	${SHEDSKIN_LIBDIR}/re.cpp \
	${SHEDSKIN_LIBDIR}/builtin.cpp

HPPFILES=/Users/denislavrov/Desktop\ Groups/Misceleneous\ Projects/codec/shedskin/codec.hpp \
	${SHEDSKIN_LIBDIR}/re.hpp \
	${SHEDSKIN_LIBDIR}/builtin.hpp

all:	codec

codec:	$(CPPFILES) $(HPPFILES)
	$(CC)  $(CCFLAGS) $(CPPFILES) $(LFLAGS) -o codec

codec_prof:	$(CPPFILES) $(HPPFILES)
	$(CC) -pg -ggdb $(CCFLAGS) $(CPPFILES) $(LFLAGS) -o codec_prof

codec_debug:	$(CPPFILES) $(HPPFILES)
	$(CC) -g -ggdb $(CCFLAGS) $(CPPFILES) $(LFLAGS) -o codec_debug

clean:
	rm -f codec codec_prof codec_debug

.PHONY: all clean

