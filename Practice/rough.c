#include <sys/types.h>
#include <process.h>
#include <stdlib.h>
#include <unistd.h>
#include <stdio.h>
int main()
{
    pid_t pid;
    char *message;
    int n;
    printf("Program starts: \n");
    pid = fork();
    switch (pid)
    {
    case -1:
        perror("fork failed");
        exit(1);
    case 0:
        message = "I am child";
        n = 4;
        break;
    default:
        message = "I am parent";
        n = 3;
        break;
    }
    for (; n > 0; n--)
    {
        printf("%s %d\n", message, n);
        // sleep(1);
    }
    exit(0);
}
