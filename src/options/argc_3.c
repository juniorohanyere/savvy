#include <string.h>
#include <ctype.h>

#include "show_quiz.h"
#include "help.h"

/**
 * argc_3 - function to assign options for the third
 *	    command line argument
 *
 * @str: variable to retrieve the third command line argument
 *
 * Return: return nothing
*/

void argc_3(char *str[])
{
	int isnum;

	if (strcmp(str[1], "-q") == 0 || strcmp(str[1], "--questions") == 0)
	{
		isnum = isnumber(str[2]);
		if (isnum == 0)
		{
			get_questions(str[2]);	/**
						 * the third argument is retrieved in this function
						 * and furtherly converted to an int
						 * if the argument does not contain letters
						*/
		}
		else
		{
			input_warning(str[2]);
			help_message();
		}
	}
	else
	{
		option_warning(str[1]);
		help_message();
	}
}

/**
 * isnumber - User defined function
 *
 * @str: String variable to check and validate
 *
 * Description: A function to check and validate
 *		if input contains letters or not
 *
 * Return: return 0 or 1
*/

int isnumber(char str[])
{
	int length, i, flag;

	length = strlen(str);
	for (i = 0; i < length; i++)
	{
		/**
		 * if a character is an integer, the isdigit function returns 0.
		 * otherwise, it returns a value greater than 0
		 * for alphabets and special characters respectively
		*/

		if (isdigit(str[i]))
			flag = 0;
		else
		{
			flag = 1;
			break;  /**
				 * Breaks loop once a character is not an integer
				 * to avoid junks in system memory
				*/
		}
	}
	if (flag == 0)
		return (0);
	else
		return (1);
}
