#include<stdio.h>
#include<unistd.h>
int main(){
int x=fork();
  if(x>0){
    printf("ParentProcess\n");
printf("Parent Process Id %d\n",getpid());
  }
  else
  {
   printf("ChildProcess\n");
printf("Child process Id %d\n",getppid());

  }
  return 0;
}
