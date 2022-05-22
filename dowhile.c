#include <stdio.h>

#define __TEST_MACRO__(i,j) do{ \
      printf("macro_test:%d,%d\n",i,j); \
 }while(0)

int main()
{
    int ret = 0;
    if(0 == ret)
        __TEST_MACRO__(1,2);
    else
        __TEST_MACRO__(0,0);
    printf("ret:%d\n",ret);
    ret=3;
    if(0 == ret)
        __TEST_MACRO__(1,2);
    else
        __TEST_MACRO__(0,0);
    printf("ret:%d\n",ret);
    return ret;
}
