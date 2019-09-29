#include<stdio.h>
#include<stdlib.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/wait.h>


int main(){

	pid_t pid;
	int status;
	char * argv[] = {0};
	pid = fork();
	if (pid == 0){
		system("./zero");
	}
	waitpid(pid,&status,0);
	return 0;
}