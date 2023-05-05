#include <string.h>

#include "colors.h"
#include "ref.h"

/**
 * answers - function to validate answer
 * @num: generated random integer
 * @str: string variable to accept input
 *
 * Description: each questions having the same character of answer
 *		are grouped into an if statement, the string .i.e.
 *		the user's answer, is compared with a given set of options
 *		'a,b,c, and d'
 *
 * Return: Return a string
*/

const char *answers(int num, char *str)
{
	if ((num == 0 || num == 1 || num ==  3 || num == 11 || num == 14)
		&& strcmp(str, "a") == 0)
		return (PASS);
	else if ((num == 2 || num == 4 || num == 9 || num == 12)
		&& strcmp(str, "b") == 0)
		return (PASS);
	else if ((num == 5 || num == 6 || num == 7 || num == 8 || num == 10 ||
		num == 13)
		&& strcmp(str, "c") == 0)
		return (PASS);
	else if (strcmp(str, "d") == 0)
		if (num == 0 || num == 1 || num == 3 || num == 11)
			return (LUCK_A);
		else if (num == 2 || num == 4 || num == 9 || num == 12)
			return (LUCK_B);
		else
			return (LUCK_C);
	else
		if (num == 0 || num == 1 || num == 3 || num == 14)
			return (FAIL_A);
		else if (num == 2 || num == 4 || num == 9)
			return (FAIL_B);
		else
			return (FAIL_C);
}
