#include <stdio.h>

#include "argc_2.h"
#include "help.h"

/**
 * argc_1 - function to handle one command line argument
 *
 * Description: (see command function in ../savvy.c file)
 *
 * Return: return nothing
*/

void argc_1(void)
{
	printf("Welcome to savvy\n");
	printf("Savvy is a command line program.\n");
	printf("Aimed at increasing the tendency\n");
	printf("At which programmers, expecially newbies learn\n");

	help_message();
}
