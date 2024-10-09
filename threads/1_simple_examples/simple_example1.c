#include<pthread.h>
#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>

void* myThreadFun(void* vargp)
{
  sleep(1); 
  printf("Printing GeeksQuiz from Thread \n");
  return NULL;
}

int main()
{
  prthread_t thread_id;
  printf("Before Thread\n");
  // Syntax: pthread_create(pthread_t*, cosnt pthread_t* , void*(*)(void), void* );
  pthread_create(&thread_id, NULL, myThreadFun, NULL);

  // Syntax: pthread_join(pthread_t, void**);
  pthread_join(thread_id, NULL);

  printf("After Thread\n");
  exit(0);

}
