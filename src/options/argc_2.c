#include <stdio.h>
#include <string.h>

#include "argc_2.h"
#include "summary.h"
#include "colors.h"

/**
 * argc_2 - function to handle two command line arguments
 *
 * @str: string containing the current version number of the program
 * @str1: the argument passed to the command line
 *
 * Return: return nothing
*/

void argc_2(char str[], char *str1[])
{
	if (strcmp(str1[1], "-h") == 0 || strcmp(str1[1], "--help") == 0)
	{
		/* display a list of usable command options */
	}
	else if (strcmp(str1[1], "-v") == 0 || strcmp(str1[1], "--version") == 0)
	{
		printf("\n");
		printf("savvy " GREEN "%s " DEFAULT, str);
		printf("created by " BOLD_BLUE "Junior Ohanyere" DEFAULT "\n\n");
	}
	else if (strcmp(str1[1], "-S") == 0 || strcmp(str1[1], "--summary") == 0)
		print_summary();
	else
	{
		warning(str1[1]);
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

/**
 * warning - function to print a warining menssage
 *	     when there is an invalid use of commands
 *
 * @str: variable to retrieve the command line argument entered
 *
 * Description: prints the argument entered in red as a warning
 *
 * Return: return nothing
*/
void warning(char str[])
{
	printf("Unknown option: " RED "%s" DEFAULT, str);
	printf("\n");
}
