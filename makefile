CC = gcc
CFLAGS = -Wall -ansi
TARGET = stats
SRC = main.c avg.c sum.c min.c max.c
OBJS = main.o avg.o sum.o min.o max.o
$(TARGET): $(OBJS)
	$(CC) -o $(TARGET) $(OBJS)
main.o: main.c avg.h sum.h min.h max.h
	$(CC) $(CFLAGS) -c main.c
avg.o: avg.c sum.h
	$(CC) $(CFLAGS) -c avg.c
sum.o: sum.c
	$(CC) $(CFLAGS) -c sum.c
min.o: sum.c
	$(CC) $(CFLAGS) -c min.c
max.o: max.c
	$(CC) $(CFLAGS) -c max.c
clean:
	/bin/rm -f *.o $(TARGET)
