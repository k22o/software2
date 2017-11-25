#include <stdio.h>
#include <pthread.h>
#include <signal.h>

long int shared_resource =0;
pthread_mutex_t lock = PTHREAD_MUTEX_INITIALIZER;

static void signal_handler(int sig){
  printf("signal handler for %d\n",sig);
  exit(1);
}

void *task(void *arg){
  long int i, loop = (long)arg;
  for( i = 0; i<loop; i++){
    printf("Thread [%x]: %ld\n",(int)pthread_self(), i);
    //shared_resource++;
    int j ,temp;
    pthread_mutex_lock(&lock);
    for(j=0;j<10000;j++){
      temp = shared_resource;
      temp = temp+1;
      usleep(1);
      shared_resource = temp;
    }
    pthread_mutex_unlock(&lock);
    usleep(10*1000*1000/loop);
  }
  arg = (void *)(shared_resource);
}

int main(){
  pthread_t thread1,thread2;
  long int loop1 = 10, loop2 = 20;

  signal(SIGINT,signal_handler);
  pthread_create(&thread1, NULL, task, (void *)loop1);
  pthread_create(&thread2,NULL,task ,(void *)loop2);

  int ret1,ret2;
  pthread_join(thread1, (void **)&ret1);
  printf("Thread[%x]:finished,return %d\n", (int)thread1, ret1);
  pthread_join(thread2, (void **)&ret2);
  printf("Thread[%x]:finished,return %d\n", (int)thread2, ret2);

  return 0;
  
}
