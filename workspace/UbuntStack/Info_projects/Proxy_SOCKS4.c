
#include <stdio.h>
#include <stdlib.h>
#include <netinet/in.h>
#include <string.h>
#include <assert.h>
#include <sys/types.h>
#include <sys/socket.h>

int main (){
	#define backlog 5
	int cli_soc;
	cli_soc = socket(AF_INET, SOCK_STREAM, 0);
	struct sockaddr_in proxy_addr;
	bzero(&proxy_addr,sizeof(proxy_addr));
	proxy_addr.sin_family = AF_INET;
	proxy_addr.sin_port = htons(8080);
	proxy_addr.sin_addr.s_addr = htonl(INADDR_ANY);

	int bind_res =  bind( cli_soc, (struct sockaddr*)&proxy_addr, sizeof(proxy_addr) );
	assert( bind_res >= 0);
	int listen_res  =  listen ( cli_soc, backlog );
	assert(listen_res >= 0 );
	int accept_res = accept (cli_soc, (struct sockaddr*)&proxy_addr, sizeof(proxy_addr), SOCK_STREAM);


	int close(accept_res);



}





































