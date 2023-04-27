#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include <sys/types.h>
int main(){
  printf("Hello, I'm exec program!\n");
  getchar();
  char *args[]={"./another",NULL};
  execvp(args[0],args);
  return 0;
}
