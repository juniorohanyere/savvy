CC = gcc

CFLAGS = -Wall -Werror -Wextra -pedantic -std=gnu89

OBJS = quiz.o

all: $(OBJS)

quiz.o: quiz.c
	$(CC) $(CFLAGS) -c quiz.c

clean:
	rm $(OBJS)
