#include <stdio.h>

unsigned long saiki(unsigned long i)
{
    if(1 == i){
         return 1;
    }
    return (i+saiki(i-1));
}

int main()
{
    unsigned long kekka=0;
    kekka += saiki(256);
    printf("kekka:%d\n",kekka);
}
