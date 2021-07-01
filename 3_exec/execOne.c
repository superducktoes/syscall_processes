#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

int main() {

  printf("Starting main program\n");
  
  char *args[]={"./execTwo", NULL};
  execvp(args[0], args);

  printf("Ending. This will never be seen ");

  return 0;
}
