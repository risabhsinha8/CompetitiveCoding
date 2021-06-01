#include<stdio.h>
#include <sys/types.h> 
#include <unistd.h> 
#define _XOPEN_SOURCE 600

int main()
{
	pid_t pid = fork();
	fork()&&fork();
	printf("hello");
}
