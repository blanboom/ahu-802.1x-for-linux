/*
version:0.1
athor:zfk
*/
#include<stdio.h>
#include<stdlib.h>
#include<errno.h>
#include<signal.h>
#include<termios.h>
#include"packet.h"

void sig_inter(int);

int main(int argc,char *argv[]) {
	struct termios initialsetting,newsetting;
	
	if(getuid() != 0)
	{
		fprintf(stderr, "Require root privilege.\n");
		exit(-1);
	}
	
	if (argc != 4) {
		fprintf(stderr, "Usage: %s username password interface\n", argv[0]);
		exit(-1);
	}
	
	strcpy(name, argv[1]);
	strcpy(passwd, argv[2]);
	strcpy(interface, argv[3]);

	printf("Name: %s, Password: %s, Interface: %s\n", argv[1], argv[2], argv[3]);

	signal(SIGINT,sig_inter);

	getlocaleth();//获取mac信息
	send_startp();//开始认证
	upinfo();//上传信息

	exit(0);	
}

