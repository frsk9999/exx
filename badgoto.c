#include <stdlib.h>
#include <unistd.h>

int main()
{
    char *p;

kuro:
    p = (char *)malloc(sizeof(char)*1024*1024);
    sleep(1);
    goto kuro;

    /* never arrive here */
    free(p);
    return -1;
}
