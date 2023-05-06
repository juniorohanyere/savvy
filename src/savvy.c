#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include "argc_1.h"
#include "argc_2.h"
#include "argc_3.h"
#include "show_quiz.h"
#include "help.h"

/**
 * commands - function to handle command line arguments
 *	      entered from main function
 *
 * @num: number of command line arguments to accept
 * @str: array pointer holding the arguments entered
 *
 * Return: always return 0
*/

int commands(int num, char *str[])
{
	if (num <= 5)
	{
		if (num == 1)
			argc_1();
		else if (num == 2)
		{
			char version[] = "v1.0.0";

			argc_2(version, str);
		}
		else if (num == 3)
		{
			argc_3(str);
		}
	}
	else
	{
		help_message();
	}
	return (0);
}

/**
 * main - Entry point
 *
 * @argc: number of command line arguments to be used
 * @argv: pointer array holding the arguments entered
 *	  (see commnds function in this file)
 *
 * Description: A program to aid learning for software engineers
 *
 * Return: Always return 0
*/

int main(int argc, char *argv[])
{
	commands(argc, argv);

	printf("Welcome To savvy quiz\n");
	printf("Try to answer the questions YOURSELF, ");
	printf("so you can know how much you're improving.");
	printf("YOU ARE NOT FORCED!\n");
	printf("Also note that you will be PENALIZED ");
	printf("for wrong answers\n\n");

	/* get_questions(); */

	return (0);
}
