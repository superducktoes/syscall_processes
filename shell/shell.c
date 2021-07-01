#include <stdio.h>
#include <unistd.h>
#include <string.h>
#include <sys/wait.h>

int main()
{

  printf("Simple Shell \n");

  if(fork() == 0){

    size_t sz = 0;
    char *cmd[2];
    
    memset(cmd, 0, sizeof(char*) * (2));
    
    printf("> ");
    
    int len = getline(&cmd[0], &sz, stdin);
    cmd[0][len-1] = '\0';
    
    execvp(cmd[0], cmd);

  } else {
    wait(NULL);
    printf("\nCommand finished in child\n");
  }
  
  return 0;
}
