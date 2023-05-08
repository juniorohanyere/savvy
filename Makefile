# top level makefile

CC = gcc

TARGET = savvy

OBJS = quiz/c/*.o quiz_ref/c/*.o src/*.o src/options/*.o

DIRS = quiz/c quiz_ref/c src src/options

CFLAGS = -Wall -Werror -Wextra -pedantic -std=gnu89


APP_PATH = /opt/$(TARGET)

BIN_PATH = /usr/local/bin

TERMUX_PATH = /data/data/com.termux/files

TERMUX_HOME_PATH = $(TERMUX_PATH)/home

TERMUX_APP_PATH = $(TERMUX_PATH)/opt/$(TARGET)

TERMUX_BIN_PATH = $(TERMUX_PATH)/usr/bin

$(TARGET): subsystem
	@echo "make[1]: Linking object files"
	$(CC) $(CFLAGS) -o $(TARGET) $(OBJS)

subsystem:
	$(MAKE) -C quiz/c
	$(MAKE) -C quiz_ref/c
	$(MAKE) -C src
	$(MAKE) -C src/options

# not yet implemented
# install-packages: install-betty

betty:
	$(MAKE) -C quiz/c betty
	$(MAKE) -C quiz_ref/c betty
	$(MAKE) -C src betty
	$(MAKE) -C src/options betty

# install the betty program to be able to check for
# betty coding and documentation style
install-betty:
	rm -rf Betty
	@git clone https://github.com/juniorohanyere/Betty.git

ifeq (${HOME}, $(TERMUX_HOME_PATH))
	@cd Betty && ./install.sh && cd ..
	@rm -rf Betty
else
	@cd Betty
	@echo "Installing betty on your system requires root access."
	@sudo ./install.sh && cd ..
	@rm -rf Betty
endif

.PHONY: clean clean-all install

install:
	@echo "Compiling and installing libraries..."
	@echo "Retrieving content of database..."
	@echo "Found questions directory"
	@echo "Found answers directory"
	@echo "Mapping answers to questions..."

ifeq (${HOME}, $(TERMUX_HOME_PATH))
	@mkdir -p $(TERMUX_APP_PATH)
	@cp $(TARGET) $(TERMUX_APP_PATH)
	@rm -rf $(TERMUX_BIN_PATH)/$(TARGET)
	@ln -s $(TERMUX_APP_PATH)/$(TARGET) $(TERMUX_BIN_PATH)/$(TARGET)
else
	@sudo mkdir -p $(APP_PATH)
	@sudo cp $(TARGET) $(APP_PATH)
	@sudo rm -rf $(BIN_PATH)/$(TARGET)
	@sudo ln -s $(APP_PATH)/$(TARGET) $(BIN_PATH)/$(TARGET)
endif
	@echo "Cleaning up junk folders and files..."
	@echo "Found rubbish folders and files"
	@echo "Trashing rubbish folders and files..."
	@echo "Getting ready..."
	@echo "Done!"
clean:
	-$(MAKE) -C quiz/c clean
	-$(MAKE) -C quiz_ref/c clean
	-$(MAKE) -C src clean
	-$(MAKE) -C src/options clean

clean-all:
	@-rm savvy
	-$(MAKE) -C quiz/c clean-all
	-$(MAKE) -C quiz_ref/c clean-all
	-$(MAKE) -C src clean-all
	-$(MAKE) -C src/options clean-all
