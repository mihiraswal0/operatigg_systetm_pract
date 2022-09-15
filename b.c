#include<stdio.h>
#include<unistd.h>
int main(){
int x=fork();
if(x==0){
sleep(2);
printf("ChildProcess\n");
printf("Process Id %d\n",getpid());
printf("Child  Parent process Id %d\n",getppid());

}
else{

printf("ParentProcess\n");
printf("Parent Process Id %d\n",getpid());
}
}
