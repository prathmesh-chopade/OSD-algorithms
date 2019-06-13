#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
int main(){
	int pid;
//	pid = fork();
	if(pid == 0){
		printf("\n Parent process id : 6");
	//	printf("%u",getpid());
		
		printf("\n Child process with Parent id : 6");
	//	printf("%u",getpid());
	}
	return 0;
}

