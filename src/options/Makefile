CC = gcc

OBJS = argc_1.o argc_2.o argc_3.o

INCLUDES = -I..

CFLAGS = $(INCLUDES) -Wall -Werror -Wextra -pedantic -std=gnu89

all: $(OBJS)

argc_1.o: argc_1.c argc_2.h
	$(CC) $(CFLAGS) -c argc_1.c

argc_2.o: argc_2.c argc_2.h ../summary.h ../colors.h
	$(CC) $(CFLAGS) -c argc_2.c

argc_3.o: argc_3.c argc_3.h ../show_quiz.h
	$(CC) $(CFLAGS) -c argc_3.c

clean:
	rm $(OBJS)
