#include <stdlib.h>
#include <stdio.h>
#include <pthread.h>
#include <unistd.h>

int i=0;
void* thread_func(void* arg){
	pthread_setcancelstate(PTHREAD_CANCEL_DISABLE, NULL);
	for (i=0; i<4; i++) {
		printf("i'm still running!\n");
		usleep(1);
	}
	pthread_setcancelstate(PTHREAD_CANCEL_ENABLE, NULL);
	pthread_testcancel();
	printf("YOU WILL NOT STOP ME!!!\n");
	}
int main(int argc, char * argv[]){
	pthread_t thread;
	pthread_create(&thread, NULL, thread_func,NULL);
	while(i<1) usleep(1);
	pthread_cancel(thread);
	printf("Requested to cancel the thread\n");
	pthread_join(thread, NULL);
	printf("The thread is stopped.\n");
return EXIT_SUCCESS;
}
