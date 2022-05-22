#ifndef __TEST_H__
#define __TEST_H__
#define __TEST__ (2022)
#endif

#ifdef __TEST__
  #if __TEST__ > (1024)
    #define __TEST2__ (30)
  #elif __TEST__ < (0)
    #define __TEST2__ (20)
  #else
    #define __TEST2__ (10)
  #endif
#endif

#undef __TEST__
#define __TEST_PRINT__(...) do {\
    printf(__VA_ARGS__);\
    printf("\n");\
}while(0)

#pragma STDC FP_CONTRACT ON

#include <stdio.h>

int main()
{
    __TEST_PRINT__("__TEST2__:%d",__TEST2__);
}
