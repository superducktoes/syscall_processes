#include <stdio.h>
#include <stdlib.h>
#include <sys/wait.h>
#include <unistd.h>

int main() {

  int pid;
  pid = getpid();

  if(fork() == 0) {
    pid = getpid();
    printf("Hello from child process! - %d\n", pid);
  } else {
    printf("Hello from parent! - %d\n", pid);
    printf("Child process terminated - %d\n", pid);
  }
  
  printf("Exiting - %d\n", pid);

  return 0;
}
