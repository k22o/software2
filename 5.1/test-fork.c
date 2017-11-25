#include<stdio.h>
#include<stdlib.h>
int shared_resources = 0;

int main(){

  pid_t pid;
  pid = fork();
  if(pid == 0){
    int i;
    for(i= 0; i<10; i++){
      printf("Process[%d]:[%d]\n",pid,i);
      shared_resources++;
      sleep(1);
    }
    printf("Process[%d] :finished rerutn %d",pid ,shared_resources);
    exit(0);
  }else if(pid >0){
    int i;
    for(i=0;i<20;i++){
      printf("Process[%d]:[%d]\n",pid,i);
      shared_resources++;
      usleep(300*1000);
    }
    int status;
    wait(&status);
    printf("Process[%d] :finished rerutn %d",pid ,shared_resources);
  }
  return 0;
}
