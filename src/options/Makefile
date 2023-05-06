CC = gcc

OBJS = argc_1.o argc_2.o argc_3.o help.o

INCLUDES = -I..

CFLAGS = $(INCLUDES) -Wall -Werror -Wextra -pedantic -std=gnu89

all: $(OBJS)

argc_1.o: argc_1.c argc_2.h help.h
	$(CC) $(CFLAGS) -c argc_1.c

argc_2.o: argc_2.c argc_2.h help.h ../summary.h ../colors.h
	$(CC) $(CFLAGS) -c argc_2.c

argc_3.o: argc_3.c argc_3.h help.h ../show_quiz.h
	$(CC) $(CFLAGS) -c argc_3.c

help.o: help.c help.h ../colors.h
	$(CC) $(CFLAGS) -c help.c

# betty documentation and coding style
betty:
	@betty *.c *.h

.PHONY: clean clean-all

clean:
	@-rm $(OBJS)

clean-all:
	@-rm *.o
