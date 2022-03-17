#include<stdio.h>
#include<unistd.h>
#include<fcntl.h>

int main()
{

	pid_t childa;
	
	childa = fork();
	
	if(childa == 0)
	{
		printf("\n child process created with pid = %d\n\n", getpid());
		
		int fd1;
		char buffer[100];
		fd1 = open("test5.txt", O_CREAT | O_RDWR, 777);
		
		read(fd1, buffer, 100);
		
		printf("buffer data is : \n%s\n", buffer);
		printf("\n child executed \n\n");
		
	}
	else
	{
		sleep(2);
		printf("Parent process started with pid = %d\n\n", getppid());
		
	}
	

return 0;
}
