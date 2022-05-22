#include <stdio.h>

#define Rprintf(...) { \
    printf(__VA_ARGS__);       \
    printf("\n");    \
}

int testfp(char *p)
{
    p[0]='f';
    Rprintf("%s",p);
}

int parrot(int i)
{
    return i;
}

int main()
{
    char test[]="test.";
    testfp(test);
    printf("%s\n",test);
    return parrot(0);
}
