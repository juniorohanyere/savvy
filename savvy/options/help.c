#include <stdio.h>

#include "arg_2.h"
#include "summary.h"

/**
 * help - function to print a help message to the standard output
 *
 * @str: string containing the current version number of the program
 * @str1: the argument passed to the command line
 *
 * Return: return nothing
*/

void arg_2(char str[], char *str1[])
{
	if (strcmp(str1, "-h") == 0 || strcmp(str1, "--help")
	{
		/* display a list of useable command options */
	}
	else if (strcmp(str1, "-v") == 0 || strcmp(str1, "--version") == 0)
		printf("savvy \033[0;32]%s\033[0m created by Twin J", str);
	else if (strcmp(str1, "-S") == 0 || strcmp(str, "--summary") == 0)
		get_summary();
	else
	{
		printf("Unknown option: \033[0;31m%s\033[0m\n", str1);
		help_message();
	}
}

void help_message(void)
{
	printf("Please use the \033[0;32m-h\032[0m ");
	printf("or \033[0;33m--help\033[0m option ");
	printf("to view a list of available commands and their use.\n");
}
