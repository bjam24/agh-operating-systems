#include <sys/resource.h>
#include <stdio.h>
#include <stdlib.h>
#include <errno.h>
#include <unistd.h>
/*
On my laptop ulimit -Hu returns 126732 kB
ulimit -u 7000 kB
*/
int main(){
    pid_t pid = getpid();
    printf("pid: %lun", pid);
    struct rusage r_usage;
    double* p[1000];
    for (int i=0; i<1000; i++){
        p[i] = (double*) malloc(1000 * sizeof(double));
    }

    double count = 0.0;
    for (int i = 0; i < 1000; i++){
        for (int j = 0; j < 1000; j++){
            p[i][j] = ++count;
            int ret = getrusage(RUSAGE_SELF,&r_usage);
            if (r_usage.ru_maxrss >= 7000){ /* res!=0*/
                /*printf("Error in getrusage. errno = %d\n", errno);*/
                printf("Hard memory limit achieved\n");
                exit(EXIT_SUCCESS);
            }
        }
        if(i%300==0){
            printf("Memory usage: %ld kilobytes\n",r_usage.ru_maxrss);
        }
    }

    for (int i = 0; i < 1000; i++){
        free(p[i]);
    }

    printf("Press the Enter key to continue\n");
    (void) getc(stdin);
    return 0;
}
