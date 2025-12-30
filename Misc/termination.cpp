#include  <stdio.h>
#include  <string.h>
#include  <sys/types.h>

int child_status=10; 

 fork();

  wait(child_status); 

  if (WIFEXITED(child_status)){
    printf ("The child process exited normally, with exit code %d\n",WEXITSTATUS(child_status));}
	else{
		printf ("The child process exited abnormally\n");
			}
return  0;
