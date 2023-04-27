#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>
#include <signal.h>
#include <sys/types.h>

int main(){
    pid_t pid;
    long long int process_counter = 1;
    while(1){
        pid = fork();
        if(pid < 0){
            printf("Fork Failed");
            sleep(1);
        }
        else if(pid==0){
            while (1){
                sleep(1);
            }
        }
        else{
            process_counter++;
            printf("Created process: %llu\n", process_counter);
        }
    }
    return 0;
}
