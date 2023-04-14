//write programs to implement cliend and server(TCP) using C on Linux platform

//problem def: 
//short description for each function calls (after the figure)
//mention the header files related to the system calls


#include<stdio.h>
#include<sys/types.h>
#include<sys/socket.h>
#include<netinet/in.h>
#include<arpa/inet.h>
#include<stdlib.h>
#include<string.h>
#include<unistd.h>

#define MAX_MSG 100

int main(int argc, char *argv[])
{
	int sd, newSd, cliLen, n;
	struct sockaddr_in servAddr, cliAddr;
	char inline[MAX_MSG];
	
	if(argc<3)
	{
		printf("Input Error");
		exit(0);
	}

/* Build server address structure */
/*bzero((char*)&servAddr,sizeof


}
