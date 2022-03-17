#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include <unistd.h>
#include <pthread.h>


int main(){
	
	pid_t child;
	
	child = fork();
	
	if (child == 0)
	{
		printf("\n child process started pid = %d\n\n", getpid());
		
		execl("/home/nisha/Desktop/Linux/Linux Internals/assignment/test6","./test6", "test file", "file 6", 0) ;
	
		printf("\n");	
	}
	else
	{
		sleep(3);
		printf("parent process started\n\n");
		printf("parent pid = %d\n", getppid());
	}
return 0;
}
