#ifndef PACKET_H
#define PACKET_H



extern unsigned char name[15];
extern unsigned char passwd[20];
extern unsigned char interface[10];
void sig_inter(int signo);
void getlocaleth();
void send_startp();
void upinfo();
 
#endif
