#include <stdio.h>

int main()
{
    int i=0,j=1,k=2;
    if( 0 == j || 0 == i){
        k=3;
    }else{
        k=1;
    }
    switch(k){
        case 1:
            printf("error,1\n");
            break;
        case 3:
            printf("true.\n");
            break;
        default:
            printf("error:%d\n",k);
            break;
    }
}
