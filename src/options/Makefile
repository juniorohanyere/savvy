CC = gcc

OBJS = arg_1.o arg_2.o

INCLUDES = -I..

CFLAGS = $(INCLUDES) -Wall -Werror -Wextra -pedantic -std=gnu89

all: $(OBJS)

arg_1.o: arg_1.c arg_2.h
	$(CC) $(CFLAGS) -c arg_1.c

arg_2.o: arg_2.c arg_2.h ../summary.h ../colors.h
	$(CC) $(CFLAGS) -c arg_2.c

clean:
	rm $(OBJS)
