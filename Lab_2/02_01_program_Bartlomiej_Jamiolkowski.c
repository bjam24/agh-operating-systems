#include <sys/types.h>
#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include <sys/types.h>
#include <sys/wait.h>

int global_static = 7;
int *global_dynamic;

int main()
{
	pid_t pid;
    
    FILE *fp =fopen("./plik.txt", "w");
    
    global_dynamic = malloc(5*sizeof(int));
    global_dynamic[3] = 6;

    int local_static = 5;
    int *local_dynamic = malloc(5*sizeof(int));
    local_dynamic[3] = 4;
    
    /* fork a child process */
	pid = fork();

	if (pid < 0) { /*error occurred*/
		fprintf(stderr, "Fork Failed");
		return 1;
	}
	else if (pid == 0) { /*child process*/
		/*execlp("/bin/ls", "ls", NULL);*/
        int number;
        scanf("%d", &number);
        
        printf("\nCHILD PROCESS\n\n");
        
        global_dynamic[3] = 3;
        local_dynamic[3] = 2;

        printf("Global_static: %d\n", global_static);
        printf("Global_dynamic: %d\n", *global_dynamic);
        printf("Local_static: %d\n", local_static);
        printf("Local_dynamic: %d\n", *local_dynamic);

        printf("Parent PID: %d\n", getppid());
        printf("Child PID: %d\n", getpid());  
	}
	else { // parent process
		/*parent will wait for child to complete*/

		wait(NULL);
        
        getchar();
        printf("\nPARENT PROCESS\n\n");
        printf("Child Complete\n");

        global_dynamic[3] = 1;
        local_dynamic[3] = 0;

        printf("Global_static: %d\n", global_static);
        printf("Global_dynamic: %d\n", *global_dynamic);
        printf("Local_static: %d\n", local_static);
        printf("Local_dynamic: %d\n", *local_dynamic);
        
        printf("Parent PID: %d\n", getppid());
        printf("Child PID: %d\n", getpid()); 
	}

	return 0;
}
