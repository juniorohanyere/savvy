#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include "./options/arg_1.h"
#include "./options/arg_2.h"
#include "show_quiz.h"

/**
 * commands - function to accept command line arguments
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
			arg_1();
		else if (num == 2)
		{
			char version[] = "v1.0.0";

			arg_2(version, str);
		}
		else if (num == 3)
		{
			/* I'm tired ! How many if else statements will I have to write */
		}
	}
	else
	{
		help_message();
	}
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

	printf("Welcome To SAVVY\n");
	printf("Try to answer the questions YOURSELF, ");
	printf("so you can know how much you're improving.");
	printf("YOU ARE NOT FORCED!\n");
	printf("Also note that you will be PENALIZED ");
	printf("for wrong answers\n\n");

	get_questions();

	return (0);
}
