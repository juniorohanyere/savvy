#include <stdio.h>
#include <string.h>

#include "arg_2.h"
#include "../summary.h"

/**
 * arg_2 - function to assign options for the second
 *	   command line argument
 *
 * @str: string containing the current version number of the program
 * @str1: the argument passed to the command line
 *
 * Return: return nothing
*/

void arg_2(char str[], char *str1[])
{
	if (strcmp(str1[1], "-h") == 0 || strcmp(str1[1], "--help") == 0)
	{
		/* display a list of usable command options */
	}
	else if (strcmp(str1[1], "-v") == 0 || strcmp(str1[1], "--version") == 0)
	{
		printf("\n");
		printf("savvy " GREEN "%s " DEFAULT, str);
		printf("created by " BOLD_BLUE "Twin J" DEFAULT "\n\n");
	}
	else if (strcmp(str1[1], "-S") == 0 || strcmp(str1[1], "--summary") == 0)
		get_summary(get_percentage());
	else
	{
		printf("Unknown option: " RED "%s" DEFAULT, str1[1]);
		printf("\n");

		help_message();
	}
}

/**
 * help_message - function to print a help guide to the standard output
 *
 * Return: return nothing
*/

void help_message(void)
{
	printf("Please use the " YELLOW "-h " DEFAULT);
	printf("or " YELLOW "--help " DEFAULT "option ");
	printf("to view a list of available commands and their use.\n\n");
}
