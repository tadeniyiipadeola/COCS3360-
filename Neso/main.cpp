// #include <io.h>
#include <stdio.h>
#include <sys/types.h>
#include <unistd.h>

int main()
{

    fork();
    printf("Hello Neso Academy!\n PID = %d\n", getpid());

    return 0;
}