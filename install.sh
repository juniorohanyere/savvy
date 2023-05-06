#!/bin/bash

# script to install the savvy program

APP_NAME="savvy"

APP_PATH="/opt/savvy"
BIN_PATH="/usr/local/bin"

TERMUX_HOME_PATH="/data/data/com.termux/files/home"
TERMUX_APP_PATH="/data/data/com.termux/files/opt/savvy"
TERMUX_BIN_PATH="/data/data/com.termux/files/usr/bin"

if [[ $HOME = ${TERMUX_HOME_PATH} ]]
then
	APP_PATH=${TERMUX_APP_PATH}
	BIN_PATH=${TERMUX_BIN_PATH}

elif [ "$(id -u)" != "0" ]
then
	echo "Installing savvy on your system requires root access."
	echo "Run: sudo make install"
	exit 1

fi

echo -e "Compiling and installing libraries..."

echo -e "Retrieving content of database..."

echo -e "Found questions directory"

echo -e "Found answers directory"
echo -e "Mapping answers to questions..."

mkdir -p "${APP_PATH}"

cp "${APP_NAME}" "${APP_PATH}"

ln -s "${APP_PATH}/${APP_NAME}" "${BIN_PATH}/${APP_NAME}"

echo -e "Cleaning up junk files..."

echo -e "Found rubbish files"
echo -e "Trashing rubbish files..."

echo -e "Getting ready..."
echo -e "Done!"
