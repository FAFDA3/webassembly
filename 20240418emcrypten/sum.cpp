// sum.cpp

#include <emscripten.h>


extern "C" {
    EMSCRIPTEN_KEEPALIVE
    unsigned sum(unsigned a, unsigned b){
        return a + b;
    }

}