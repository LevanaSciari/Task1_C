# Makefile for Task1

mymaths: recv_udp.c
	gcc -o recv_udp recv_udp.c

mymathd: send_udp.c
	gcc -o send_udp send_udp.c


mains: send_udp.c
	gcc -o send_udp send_udp.c

maind: send_udp.c
	gcc -o send_udp send_udp.c

all: recv_udp send_udp
 
clean:
	rm -f *.o
