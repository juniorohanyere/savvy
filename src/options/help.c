#include <stdio.h>

#include "help.h"
#include "colors.h"

/**
 * help_message - function to display an help message to the standard output
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
 * option_warning - function to print a warining menssage
 *		    when there is an invalid use of command line option
 *		    specified in the program
 *
 * @str: variable to retrieve the command line argument entered
 *
 * Description: prints the argument entered in red as a warning
 *
 * Return: return nothing
*/

void option_warning(char str[])
{
	printf("Invalid option: " RED "%s" DEFAULT, str);
	printf("\n");
}

/**
 * input_warning - displays a warning message regarding input to options
 *
 * @str: the command line argument entered
 *
 * Return: return nothing
*/

void input_warning(char str[])
{
	printf("Invalid input: " RED "%s" DEFAULT, str);
	printf("\n");
}

/**
 * missing_warning - displays warning message
 *		     if an input is expected after an option
 *
 * @str: the option entered
 *
 * Return: return nothing
*/

void missing_warning(char str[])
{
	printf(RED "No input specified:" DEFAULT);
	printf("Expected an input after " GREEN "%s\n" DEFAULT, str);
}
