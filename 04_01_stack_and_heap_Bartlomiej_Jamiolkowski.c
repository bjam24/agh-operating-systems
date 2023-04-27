#include <stdio.h>
#include <stdlib.h>
/* Obserwacje zmiany zajetosci pamieci przez program (RSS)
htop:
static = 9160
middle = 9160
dynamic = 17080
/proc/[id]/smaps:
static = 9312
middle = 9312
dynamic = 17128*/
void statyczna()
{
    printf("static function\n");
    double tablica[1000000];
    for(int i=0; i<1000000; i++){
        tablica[i] = 1.0;
    }
    printf("Press the Enter key to continue\n");
    (void) getc(stdin);
    /* static */
}

void dynamiczna()
{
    printf("dynamic function\n");
    double *tablica;
    tablica = (double *) malloc (1000000 * sizeof (double));
    for (int i = 0; i < 1000000; i++) {
		tablica[i] = 1.0;
	}
	printf("Press the Enter key to continue\n");
    (void) getc(stdin);
	/* dynamic */
	free(tablica);
}

int main()
{
    /*pid_t pid = getpid();
    printf("pid: %lun", pid);*/
    statyczna();
    printf("Press the Enter key to continue\n");
    (void) getc(stdin);
    /* middle */
    dynamiczna();
    return 0;
}
