#include <stdio.h>

#include "help.h"

/**
 * home - function to print a short description
 *	  of the savvy program to the standard output
 *
 * Description: (see command function in ../savvy.c file)
 *
 * Return: return nothing
*/

void home(void)
{
	printf("Welcome to savvy\n");
	printf("Savvy is a command line program.\n");
	printf("Aimed at increasing the tendency");
	printf("At which programmers, expecially newbies learn");

	help_message();
}
