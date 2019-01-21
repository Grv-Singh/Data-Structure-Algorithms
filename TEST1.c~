#include<stdio.h>
#include<stdlib.h>
#include<pthread.h>
#include<semaphore.h>

void *thread_function(void *arg);

sem_t semaphore;

void *thread_function( void *arg )
{
sem_wait( &semaphore );

int i,n,e,h,m,s,c,total=0;
scanf("%d",&n);

printf("Enter marks in 5 subjects");

for(i=0;i<n;i++){
        scanf("En%d Hn%d Ma%d Sc%d Co%d",&e,&h,&m,&s,&c);
        total = e+h+m+s+c;
        if(total>=41){
                grade ='A';
        }else{
                if(total>=31){
                        grade ='B';
                }else{
                        if(total>=21){
                                grade='C';
                        }
                }
        }
grade;
sem_post( &semaphore );

}

pthread_exit( NULL );
}

main(){

int tmp;

tmp = sem_init( &semaphore, 0, 0 );

pthread_create( &thread[i], NULL, thread_function, NULL );

thread_function();

pthread_join( thread[i], NULL );
sem_destroy( &semaphore );
return 0;

}


