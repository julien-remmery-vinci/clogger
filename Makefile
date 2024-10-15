CC=gcc
CFLAGS=-g
OUTPUTFILE=logger

$(OUTPUTFILE): main.c logger.o
	$(CC) $(CFLAGS) -o $(OUTPUTFILE) main.c logger.o

logger.o: logger.c logger.h
	$(CC) $(CFLAGS) -c logger.c

clean:
	rm -f *.o $(OUTPUTFILE) *.txt