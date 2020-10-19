CC=gcc
CFLAGS=-fno-stack-protector -Wl,-no_pie -no-pie -g

hacking: hacking.o
	$(CC) -o hacking hacking.o

clean:
	rm *.o
	rm hacking
