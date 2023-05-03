CC = gcc

OBJS = date.o get_summary.o savvy.o show_quiz.o summary.o time.o

INCLUDES = -Ioptions -I../quiz/c -I../quiz_ref/c

CFLAGS = $(INCLUDES) -Wall -Wextra -Werror -pedantic -std=gnu89

all: $(OBJS)

date.o: date.c
	$(CC) $(CFLAGS) -c date.c

get_summary.o: get_summary.c get_summary.h
	$(CC) $(CFALGS) -c get_summary.c

savvy.o: savvy.c show_quiz.h options/arg_1.h options/arg_2.h
	$(CC) $(CFLAGS) -c savvy.c

show_quiz.o: show_quiz.c show_quiz.h summary.h colors.h ../quiz_ref/c/ref.h \
../quiz/c/quiz.h
	$(CC) $(CFLAGS) -c show_quiz.c

summary.o: summary.c summary.h show_quiz.h date.h time.h colors.h get_summary.h
	$(CC) $(CFLAGS) -c summary.c

time.o: time.c
	$(CC) $(CFLAGS) -c time.c

clean:
	rm $(OBJS)
