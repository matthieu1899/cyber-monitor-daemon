#include <stdio.h>
#include <unistd.h>

int main(void)
{
    while (1) {
        printf("[cyber_daemon] heartbeat - surveillance active\n");
        fflush(stdout);   /* ecriture immediate vers le journal */
        sleep(5);
    }
    return 0;
}
