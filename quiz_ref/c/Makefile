CC = gcc

INCLUDES = -I../../src

CFLAGS = $(INCLUDES) -Wall -Werror -Wextra -pedantic -std=gnu89

OBJS = ref.o

all: $(OBJS)

ref.o: ref.c ref.h ../../src/colors.h
	$(CC) $(CFLAGS) -c ref.c

# betty documentation and coding style
betty:
	betty *.c *.h

.PHONY: clean clean-all

clean:
	-rm $(OBJS)

clean-all:
	@-rm *.o
