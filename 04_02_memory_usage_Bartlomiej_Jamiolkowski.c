#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
/* Observing memory usage increasment during running program
Observation 1:
free: 1665028 (used)
htop: 5492 (RES)
vmstat: 28187944 (free)
/proc: 27921756 kB (MemFree)
Observation 2:
free: 1660404 (used)
htop: 6548 (RES)
vmstat: 28180860 (free)
/proc: 27892440 kB (MemFree)
Observation 3:
free: 1661736 (used)
htop: 7868 (RES)
vmstat: 28192732 (free)
/proc: 27929364 kB (MemFree)
Observation 4:
free: 1654936 (used)
htop: 8924 (RES)
vmstat: 28146628 (free)
/proc: 27937600 kB (MemFree)
*/
int main(){
    pid_t pid = getpid();
    printf("pid: %lun", pid);
    double* p[1000];
    for (int i=0; i<1000; i++){
        p[i] = (double*) malloc(1000 * sizeof(double));
    }

    double count = 0.0;
    for (int i = 0; i < 1000; i++){
        for (int j = 0; j < 1000; j++){
            p[i][j] = ++count;
        }
        if(i%300==0){
            printf("Memory usage observation\n");
            printf("Press the Enter key to continue\n");
            (void) getc(stdin);
        }
    }

    for (int i = 0; i < 1000; i++){
        free(p[i]);
    }

    printf("Press the Enter key to continue\n");
    (void) getc(stdin);
    return 0;
}
