#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<unistd.h>
#include<sys/types.h>
#include<sys/socket.h>
#include<netinet/in.h>
#include<arpa/inet.h>


#define MAX_MSG 100

int main(int argc,char *argv[])
{
	int sd,newSd,cliLen,n;
	struct sockaddr_in servAddr,cliAddr;
	char line[MAX_MSG];
	
	if(argc<3)
	{
		printf("input error\n");
		exit(0);
	}

	/* build server address structure */
	//bzero((char *)&servAddr,sizeof(servAddr));
	servAddr.sin_family=AF_INET;
	servAddr.sin_addr.s_addr=inet_addr(argv[1]);
	servAddr.sin_port=htons(atoi(argv[2]));
	memset(&(servAddr.sin_zero),'\0',8); //zero the rest of the struct
	
	/* create stream socket*/
	sd=socket(AF_INET,SOCK_DGRAM,0);
	printf("SUCCESSFULLY CREATED STREAM SOCKET\n");
	/*bind local port number*/
	
	bind(sd,(struct sockaddr *)&servAddr,sizeof(servAddr));
	printf("bound local port successfully\n");

	/* specify number of concurrent clients to wait for */
	
	printf("Waiting for data on port UDP %u\n",atoi(argv[2]));

    while(1)
    {
        memset(line,0,MAX_MSG);
        /*recive data from client*/
        cliLen = sezeof(cliAddr);
        n=recvfrom(sd,line,MAX_MSG,0,(struct sockaddr *)&cliAddr,&cliLen);
        printf("from %s: UDP port  %u : %s \n", inet_ntoa(cliAddr.sin_addr),ntohs(cliAddr.sin_port),line);
    }
	return 0;
}