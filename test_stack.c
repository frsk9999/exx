#include <stdio.h>
#include <sys/types.h>
#include <sys/time.h>
#include <sys/resource.h>

int main()
{
    struct rlimit lp;

    getrlimit(RLIMIT_STACK,&lp);
    printf("stack max:%d\n",lp.rlim_max);
    printf("stack cur:%d\n",lp.rlim_cur);

}

