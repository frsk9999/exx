#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include <fcntl.h>

#define SIZE (16)
int main()
{
    char *mem;
    int fd;
    /* 取ったら */
    mem = (char *)malloc(sizeof(char)*(SIZE));
    /* 返す */
    free(mem);
    /* 開けたら */
    fd = open(__FILE__,O_RDONLY);
    /* 閉じる！ */
    close(fd);
    return 0;
}
