# top level makefile

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

install-packages: install-betty

betty:
	$(MAKE) -C quiz/c betty
	$(MAKE) -C quiz_ref/c betty
	$(MAKE) -C src betty
	$(MAKE) -C src/options betty

install-betty:
	@./install-betty.sh

.PHONY: clean clean-all install

install:
	@-./install.sh
clean:
	-$(MAKE) -C quiz/c clean
	-$(MAKE) -C quiz_ref/c clean
	-$(MAKE) -C src clean
	-$(MAKE) -C src/options clean

clean-all:
	-$(MAKE) -C quiz/c clean-all
	-$(MAKE) -C quiz_ref/c clean-all
	-$(MAKE) -C src clean-all
	-$(MAKE) -C src/options clean-all
