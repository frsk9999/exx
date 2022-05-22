#include <stdio.h>

struct type_3 {
    int i;
    int j;
    int k;
};

typedef struct {
    int i;
    int j;
    int k;
}type_3_t;

int main()
{
    struct type_3 test={0,0,0};
    type_3_t test2={1,2,3};
    printf("%d,%d,%d\n",test.i,test.j,test.k);
    printf("%d,%d,%d\n",test2.i,test2.j,test2.k);
    return 0;
}
