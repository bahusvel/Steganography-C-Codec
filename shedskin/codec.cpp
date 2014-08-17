#include "builtin.hpp"
#include "codec.hpp"

namespace __codec__ {

str *const_0;


void *a, *b, *byte;
__ss_int i;
str *__name__;



tuple2<__ss_int, __ss_int> *byteencode(__ss_int r, __ss_int g, __ss_int b, __ss_int a, __ss_int byte) {
    
    return (new tuple2<__ss_int, __ss_int>(2,((((r)&(248)))^((((byte)&(224))>>5))),((((g)&(248)))^((((byte)&(28))>>2)))));
}

str *bytedecode(__ss_int r, __ss_int g, __ss_int b) {
    
    return chr((((((((r)&(7))<<5))^((((g)&(7))<<2))))^((((b)&(6))>>1))));
}

void __init() {
    const_0 = new str("__main__");

    __name__ = new str("__main__");

    (new tuple2<void *, void *>(2,((((b)->__and__(248)))->__xor__((((byte)->__and__(3)))->__lshift__(1))),a));
    if (__eq(__name__, const_0)) {
        i = 1;
        byteencode(i, i, i, i, i);
        bytedecode(i, i, i);
    }
}

} // module namespace

int main(int, char **) {
    __shedskin__::__init();
    __shedskin__::__start(__codec__::__init);
}
