#include <stdio.h>

int test()
{ 
    return 1;
}

int g_i;

int main()
{
    int i;
    printf("test:%p\n",&test);
    printf("i:%p\n",&i);
    printf("g_i:%p\n",&g_i);
    return 0;
}
