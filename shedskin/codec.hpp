#ifndef __CODEC_HPP
#define __CODEC_HPP

using namespace __shedskin__;
namespace __codec__ {

extern str *const_0;



extern __ss_int i;
extern str *__name__;
extern void *a, *b, *byte;


tuple2<__ss_int, __ss_int> *byteencode(__ss_int r, __ss_int g, __ss_int b, __ss_int a, __ss_int byte);
str *bytedecode(__ss_int r, __ss_int g, __ss_int b);

} // module namespace
#endif
