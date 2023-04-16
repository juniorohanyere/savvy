#include <string.h>

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

const char *answers(int num, char str[])
{
	if ((num == 0 || num == 1 || num ==  3)
	&& strcmp(str, "a") == 0)
		return ("\033[0;32mPassed\033[0m");
	else if ((num == 2 || num == 4 || num == 9)
	&& strcmp(str, "b") == 0)
		return ("\033[0;32mPassed\033[0m");
	else if ((num == 5 || num == 6 || num == 7 || num == 8 || num == 10)
	&& strcmp(str, "c") == 0)
		return ("\033[0;32mPassed\033[0m");
	else if (strcmp(str, "d") == 0)
		if (num == 0 || num == 1 || num == 3)
			return ("\033[0;33mBetter luck next time \033[0;32m[a]\033[0m");
		else if (num == 2 || num == 4)
			return ("\033[0;33mBetter luck next time \033[0;32m[b]\033[0m");
		else
			return ("\033[0;33mBetter luck next time \033[0;32m[c]\033[0m");
	else
		if (num == 0 || num == 1 || num == 3)
			return ("\033[0;31mFailed \033[0;32m[a]\033[0m");
		else if (num == 2 || num == 4 || num == 9)
			return ("\033[0;31mFailed \033[0;32m[b]\033[0m");
		else
			return ("\033[0;31mFailed \033[0;32m[c]\033[0m");
}
