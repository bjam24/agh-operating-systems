#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include <sys/types.h>

int main(){
    // shows its PID, tip: getpid()
    pid_t parent, child1, grandchild1, child2;
    parent = getpid();
    printf("Program PID: %d\n", parent);
    // stops using getchar()
    getchar();
    // creates child and shows its pid, tip: fork()
    fork();
    child1 = getpid();
    // shows in child its PID and a parent PID (PPID), tip: getppid()
    if (child1 != parent){
        printf("Child PID: %d\n", child1);
        printf("Parent PID: %d\n", parent);
        // in a child process: create another child, that:
        // shows its PID and a parent PID,
        fork();
        grandchild1 = getpid();
        if (grandchild1 != child1){
            printf("Child PID: %d\n", grandchild1);
            printf("Parent PID: %d\n", child1);
        }
    }
    // stops using getchar()
    getchar();
    return (0);
}
