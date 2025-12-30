#include<stdio.h>
#include<stdlib.h>
#include<sys/types.h>
#include<sys/socket.h>
#include<string.h>
#include<netinet/in.h>
#include<pthread.h>

#define PORT 4444
#define BUF_SIZE 2000
#define CLADDR_LEN 100

void * receiveMessage(void * socket) {
 int sockfd, ret;
 char buffer[BUF_SIZE]; 
 sockfd = (int) socket;
 memset(buffer, 0, BUF_SIZE);  
 for (;;) {
  ret = recvfrom(sockfd, buffer, BUF_SIZE, 0, NULL, NULL);  
  if (ret < 0) {  
   printf("Error receiving data!\n");    
  } else {
   printf("client: ");
   fputs(buffer, stdout);
   //printf("\n");
  }  
 }
} 

void main() {
	// Two random prime numbers
    double p = 3;
    double q = 7;
 
    // First part of public key:
    double n = p*q;
 
    // Finding other part of public key.
    // e stands for encrypt
    double phi = (p-1)*(q-1);
	
	FILE *fptr;
	fptr = fopen("publ_key.txt", "r");
	
	if (fptr == NULL)
    {
        printf("Cannot open file \n");
        exit(0);
    }
	
	fgetc(fptr);
    e = fgetc(fptr);
    
    fclose(fptr);

	// Private key (d stands for decrypt)
    // choosing d such that it satisfies
    // d*e = 1 + k * totient
    int k = 2;  // A constant value
    double d = (1 + (k*phi))/e; 
 
 struct sockaddr_in addr, cl_addr;
 int sockfd, len, ret, newsockfd;
 char buffer[BUF_SIZE];
 pid_t childpid;
 char clientAddr[CLADDR_LEN];
 pthread_t rThread;
 
 sockfd = socket(AF_INET, SOCK_STREAM, 0);
 if (sockfd < 0) {
  printf("Error creating socket!\n");
  exit(1);
 }
 printf("Socket created...\n");
 
 memset(&addr, 0, sizeof(addr));
 addr.sin_family = AF_INET;
 addr.sin_addr.s_addr = INADDR_ANY;
 addr.sin_port = PORT;
 
 ret = bind(sockfd, (struct sockaddr *) &addr, sizeof(addr));
 if (ret < 0) {
  printf("Error binding!\n");
  exit(1);
 }
 printf("Binding done...\n");

 printf("Waiting for a connection...\n");
 listen(sockfd, 5);


 len = sizeof(cl_addr);
 newsockfd = accept(sockfd, (struct sockaddr *) &cl_addr, &len);
 if (newsockfd < 0) {
  printf("Error accepting connection!\n");
  exit(1);
 } 

 inet_ntop(AF_INET, &(cl_addr.sin_addr), clientAddr, CLADDR_LEN);
 printf("Connection accepted from %s...\n", clientAddr); 
 
 memset(buffer, 0, BUF_SIZE);
 printf("Enter your messages one by one and press return key!\n");

 //creating a new thread for receiving messages from the client
 ret = pthread_create(&rThread, NULL, receiveMessage, (void *) newsockfd);
 if (ret) {
  printf("ERROR: Return Code from pthread_create() is %d\n", ret);
  exit(1);
 }

while (fgets(buffer, BUF_SIZE, stdin) != NULL) {

int i;

while(buffer[i]!='\0'){
	buffer[i]=(buffer[i]^e)%n;
	
	c=buffer[i];
	
	// Decryption m = (c ^ d) % n
    double m = pow(c, d);
    m = fmod(m, n);
}

printf("\nOriginal Message Sent = %lf", m);

  ret = sendto(newsockfd, buffer, BUF_SIZE, 0, (struct sockaddr *) &cl_addr, len);  
  if (ret < 0) {  
   printf("Error sending data!\n");  
   exit(1);
  }
 }   
 
 close(newsockfd);
 close(sockfd);

 pthread_exit(NULL);
 return;
}