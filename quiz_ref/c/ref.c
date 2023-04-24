#include <string.h>

#include "ref.h"
#include "../../savvy/colors.h"

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
		return (GREEN "Passed" DEFAULT);
	else if ((num == 2 || num == 4 || num == 9)
	&& strcmp(str, "b") == 0)
		return (GREEN "Passed" DEFAULT);
	else if ((num == 5 || num == 6 || num == 7 || num == 8 || num == 10)
	&& strcmp(str, "c") == 0)
		return (GREEN "Passed" DEFAULT);
	else if (strcmp(str, "d") == 0)
		if (num == 0 || num == 1 || num == 3)
			return (YELLOW "Better luck next time " GREEN "[a]" DEFAULT);
		else if (num == 2 || num == 4)
			return (YELLOW "Better luck next time " GREEN "[b]" DEFAULT);
		else
			return (YELLOW "Better luck next time " GREEN "[c]" DEFAULT);
	else
		if (num == 0 || num == 1 || num == 3)
			return (RED "Failed " GREEN "[a]" DEFAULT);
		else if (num == 2 || num == 4 || num == 9)
			return (RED "Failed " GREEN "[b]" DEFAULT);
		else
			return (RED "Failed " GREEN "[c]" DEFAULT);
}
