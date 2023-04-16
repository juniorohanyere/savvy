#include <stdio.h>
#include <stdlib.h>
#include <string.h>

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
		{
			/**
			 * A short description of the program
			 * and a warm welcome message
			*/
			printf("Welcome to do_hard_things\n");
			printf("Please use the '-h' or '--help' option to view a list of available commands and their use");
		}
		else if (num == 2)
		{
			if (strcmp(str[1], "-h") == 0 || strcmp(str[1], "--help") == 0)
			{
				/**
				 * display a help message
				 * a guide on the use of the usable commands
				*/
			}
			else if (strcmp(str[1], "-v") == 0 || strcmp(str[1], "--version") == 0)
				printf("do_hard_things %[version number]s created by Venetius Ohanyere");
			else if (strcmp(str[1], "-S") == 0 || strcmp(str[1], "--summary") == 0)
			{
				 /* display a statistics of the most recent quiz */
			}
			else if (strcmp(str[1], "-i") == 0 || strcmp(str[1], "--intranet") == 0)
			{
				/* connects the user online, quiz is meant to be taken with set of other users */
			}
			else
			{
				printf("Unknown option: \033[0;31m%[the option the user entered]s\033[0m\n");
				printf("Please use the help option to view a list of available commands and their use");
			}
		}
		else if (num == 3)
		{
			/* I'm tired ! How many if else statements will I have to write */
		}
	}
	else
	{
		printf("Unknown option: \033[0;31m%[the option the user entered]s\033[0m\n");
		printf("Please use the help option to view a list of available commands and their use");
	}
}

/**
 * main - Entry point
 *
 * Description: A program to aid learning for software engineers
 *
 * Return: Always return 0
*/

int main(int argc, char *argv[])
{
	printf("Welcome To SAVVY\n");
	printf("Try to answer the questions YOURSELF, ");
	printf("so you can know how much you're IMPROVING.");
	printf("YOU ARE NOT FORCED!\n");
	printf("Also note that you will be PENALIZED ");
	printf("for wrong answers\n\n");

	commands(argc, argv);

	get_questions();

	return (0);
}
