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
    CHK(fcntl(sockfd, F_SETFL, fcntl(sockfd, F_GETFD, 0)|O_NONBLOCK));  // 获得／设置文件描述符标记(cmd=F_GETFD或F_SETFD);  获得／设置文件状态标记(cmd=F_GETFL或F_SETFL). 
    return 0;
}


