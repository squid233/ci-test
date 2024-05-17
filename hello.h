#ifndef HELLO_H
#define HELLO_H

#include <stdio.h>

#ifdef __cplusplus
extern "C" {
#endif

#ifndef FUNDEF
    #ifdef _MSC_VER
        #define FUNDEF extern __declspec(dllexport)
    #else
        #define FUNDEF extern
    #endif
#endif

FUNDEF void hello();

#ifdef __cplusplus
}
#endif
