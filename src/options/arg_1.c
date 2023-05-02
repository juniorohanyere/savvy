#include <stdio.h>

#include "arg_2.h"

/**
 * arg_1 - function to print a short description
 *	  of the savvy program to the standard output
 *
 * Description: (see command function in ../savvy.c file)
 *
 * Return: return nothing
*/

void arg_1(void)
{
	printf("Welcome to savvy\n");
	printf("Savvy is a command line program.\n");
	printf("Aimed at increasing the tendency\n");
	printf("At which programmers, expecially newbies learn\n");

	help_message();
}
