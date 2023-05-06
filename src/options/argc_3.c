#include "show_quiz.h"

/**
 * argc_3 - function to assign options for the third
 *	    command line argument
 *
 * Return: return nothing
*/

void argc_3(char *str[])
{
	if (strcmp(str[1], "-q") == 0 || strcmp(str[1], "--questions") == 0)
	{
		get_questions(str[2]);	/**
					 * the third argument is retrieved in this function
					 * and furtherly converted to an int if the argument does not contain letters
					*/
	}
	else
	{
		warning(str[1]);
		help_message();
	}
}
