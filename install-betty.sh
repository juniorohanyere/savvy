#!/bin/bash

TERMUX_HOME_PATH="/data/data/com.termux/files/home"

if [[ $HOME = ${TERMUX_HOME_PATH} ]]
then
	continue

elif [[ "$(id -u)" != "0" ]]
then
	git clone https://github.com/juniorohanyere/Betty.git
	cd Betty && ./install.sh
	echo -e "Installing betty on your system requires root access."
	echo -e "Run: sudo make install-betty"
	exit 1
fi

git clone https://github.com/juniorohanyere/Betty.git
cd Betty && ./install.sh && cd ..
rm -rf Betty
