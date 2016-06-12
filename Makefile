CC = g++
CFLAGS = -I./ -g -O2 -D_REENTRANT -Wall
LIBS = -lpthread
#LIBS_XTI = ../libunpxti.a ../libunp.a -pthread
#RANLIB = ranlib
CLEANFILES = core core.* *.core *.o temp.* *.out typescript* \
		*.lc *.lh *.bsdi *.sparc *.uw

#include ../Make.defines

PROGS =	server tester client \
		tcpcli01 tcpcli04 tcpcli05 tcpcli06 \
		tcpcli07 tcpcli08 tcpcli09 tcpcli10 \
		tcpserv01 tcpserv02 tcpserv03 tcpserv04 \
		tcpserv08 tcpserv09 tcpservselect01 tcpservpoll01 tsigpipe

all:	${PROGS}

server:	server.o
		${CC} ${CFLAGS} -o $@ server.o ${LIBS}
		
tester:	tester.o
		${CC} ${CFLAGS} -o $@ tester.o ${LIBS}		

client:	client.o
		${CC} ${CFLAGS} -o $@ client.o ${LIBS}


clean:
		rm -f ${PROGS} ${CLEANFILES}
