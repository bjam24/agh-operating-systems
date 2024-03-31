#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include <sys/types.h>
int main(){
  printf("Hello, I'm system program!");
  getchar();
  system("ls -al /var/log/");
  return (0);
}
