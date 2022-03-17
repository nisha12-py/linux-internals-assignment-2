#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include <unistd.h>
#include <pthread.h>



int main(){
	
	printf("program 1\n\n");
	printf("ececl command started\n");
	
	execl("/home/nisha/Desktop/Linux/Linux Internals/assignment/test4", "./test4", "test", "file", "program2", 0) ;
	printf("\n");
	
	
return 0;
}
