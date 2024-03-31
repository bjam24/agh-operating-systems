#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include <sys/types.h>

int main(){
    // shows its PID, tip: getpid()
    pid_t parent, child;
    parent = getpid();
    printf("Program PID: %d\n", parent);
    // stops using getchar()
    getchar();
    // creates child and shows its pid, tip: fork()
    fork();
    child = getpid();
    // shows in child its PID and a parent PID (PPID), tip: getppid()
    if (child != parent){
        printf("Child PID: %d\n", child);
        printf("Parent PID: %d\n", parent);
    }
    // stops using getchar()
    getchar();
    return (0);
}
