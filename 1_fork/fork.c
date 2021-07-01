#include <stdio.h>
#include <sys/types.h>
#include <unistd.h>

int main() {

  // spawn child process
  fork();

  printf("Hello world\n");

  return 0;
}
