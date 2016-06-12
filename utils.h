#include <sys/types.h>
#include <unistd.h>
#include <fcntl.h>

#include <list>
#include <sys/socket.h>	/* basic socket definitions */
#include <netinet/in.h>
#include <arpa/inet.h>
#include <sys/epoll.h>
#include <time.h>
#include<string.h>



int setnonblocking(int sockfd)
{
    CHK(fcntl(sockfd, F_SETFL, fcntl(sockfd, F_GETFD, 0)|O_NONBLOCK));
    return 0;
}


