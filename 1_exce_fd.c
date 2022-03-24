

#include<fcntl.h>
#include<stdlib.h>
#include<stdio.h>

int main()
{
	int pp;
	char message[200] = "Test whether the process(exec() system call) that replaces old program data , will inherit the fd's or not\n";

	pp=open("fd_execl.txt", O_CREAT|O_RDWR, 0666);
	printf("The File Descriptor Is Given: %d\n ", pp );

	write(pp, message, strlen( message ));

	close(pp);
	
	return 0;
}
