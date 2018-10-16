#include<stdio.h>
#include<unistd.h>
#include<stdlib.h>
#include<pthread.h>

int chunk_size = 100;
int data[1000];

void *Add (void *arg){

	int start = (int) arg;
	int end = start + chunk_size;
	int sum = 0;

	for (int i = start ; i < end ; i++){
		sum = sum + data[i];
	}

	return 	((void*)sum);

	}

int main () {
	int status_t1 , status_t2 , status_t3, status_t4 , status_t5, status_t6, status_t7,status_t8,status_t9,status_t10;
	pthread_t thread_1 , thread_2, thread_3, thread_4,thread_5,thread_6,thread_7,thread_8,thread_9,thread_10;

	for (int i = 0 ;i < 1000 ; i++){
		data[i]=i;
	}

	pthread_create (&thread_1,NULL , Add,(void*)(0*chunk_size));
	pthread_create (&thread_2,NULL , Add,(void*)(1*chunk_size));
	pthread_create (&thread_3,NULL , Add,(void*)(2*chunk_size));
	pthread_create (&thread_4,NULL , Add,(void*)(3*chunk_size));
	pthread_create (&thread_5,NULL , Add,(void*)(4*chunk_size));
	pthread_create (&thread_6,NULL , Add,(void*)(5*chunk_size));
	pthread_create (&thread_7,NULL , Add,(void*)(6*chunk_size));
	pthread_create (&thread_8,NULL , Add,(void*)(7*chunk_size));
	pthread_create (&thread_9,NULL , Add,(void*)(8*chunk_size));
	pthread_create (&thread_10,NULL , Add,(void*)(9*chunk_size));

	pthread_join (thread_1,(void **)&status_t1);
	pthread_join (thread_2,(void **)&status_t2);
	pthread_join (thread_3,(void **)&status_t3);
	pthread_join (thread_4,(void **)&status_t4);
	pthread_join (thread_5,(void **)&status_t5);
	pthread_join (thread_6,(void **)&status_t6);
	pthread_join (thread_7,(void **)&status_t7);
	pthread_join (thread_8,(void **)&status_t8);
	pthread_join (thread_9,(void **)&status_t9);
	pthread_join (thread_10,(void **)&status_t10);

	int SUM = status_t1 + status_t2+ status_t3 + status_t4 + status_t5 + status_t6 + status_t7 + status_t8+ status_t9 + status_t10;
	printf("Total SUM: %d" , SUM);

	return 0;
	

}
