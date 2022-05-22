#include <stdio.h>
#include <unistd.h>
#include <sys/select.h>

int nisegets(char *p,int num)
{
    int ret;
    fd_set fs;
    FD_ZERO(&fs);
    FD_SET(0,&fs);

    ret = select(1,&fs,NULL,NULL,NULL); 
    return read(0,p,num);
}

int main()
{
    char test[256];
    printf("ゆっくり入力していってね！！\n");
    nisegets(test,255);
    return printf("%s",test);
}
