CC = gcc

TARGET = savvy

OBJS = quiz/c/*.o quiz_ref/c/*.o src/*.o src/options/*.o

DIRS = quiz/c quiz_ref/c src src/options

CFLAGS = -Wall -Werror -Wextra -pedantic -std=gnu89

$(TARGET): subsystem

	$(CC) $(CFLAGS) -o $(TARGET) $(OBJS)

subsystem:
	$(MAKE) -C quiz/c
	$(MAKE) -C quiz_ref/c
	$(MAKE) -C src
	$(MAKE) -C src/options

.PHONY: clean

clean:
	$(MAKE) -C quiz/c clean
	$(MAKE) -C quiz_ref/c clean
	$(MAKE) -C src clean
	$(MAKE) -C src/options clean
