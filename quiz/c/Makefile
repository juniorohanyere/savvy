CC = gcc

CFLAGS = -Wall -Werror -Wextra -pedantic -std=gnu89

OBJS = quiz.o

all: $(OBJS)

quiz.o: quiz.c
	$(CC) $(CFLAGS) -c quiz.c

# betty documentation and coding style
betty:
	betty *.c *.h

.PHONY: clean clean-all

clean:
	-rm $(OBJS)

clean-all:
	@-rm *.o
