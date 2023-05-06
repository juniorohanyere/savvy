CC = gcc

OBJS = date.o savvy.o show_quiz.o summary.o time.o

INCLUDES = -Ioptions -I../quiz/c -I../quiz_ref/c

CFLAGS = $(INCLUDES) -Wall -Wextra -Werror -pedantic -std=gnu89

all: $(OBJS)

date.o: date.c
	$(CC) $(CFLAGS) -c date.c

savvy.o: savvy.c show_quiz.h options/argc_1.h options/argc_2.h options/argc_3.h \
options/help.h
	$(CC) $(CFLAGS) -c savvy.c

show_quiz.o: show_quiz.c show_quiz.h summary.h colors.h ../quiz_ref/c/ref.h \
../quiz/c/quiz.h options/help.h
	$(CC) $(CFLAGS) -c show_quiz.c

summary.o: summary.c summary.h show_quiz.h date.h time.h colors.h
	$(CC) $(CFLAGS) -c summary.c

time.o: time.c
	$(CC) $(CFLAGS) -c time.c

# betty documentation and coding style
betty:
	@betty *.c *.h

.PHONY: clean clean-all

clean:
	@-rm $(OBJS)

clean-all:
	@-rm *.o
