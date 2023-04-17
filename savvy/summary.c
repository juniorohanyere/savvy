static int score = get_score();

/**
 * get_percentage - function to calculate the percentage from score
 *
 * @num: the score gotten from quiz taken
 *
 * Return: return the percentage of the score
*/

float get_percentage(int num)
{
	float percentage = ((float) score / num) * 100;

	return (percentage);
}

/**
 * get_summary - function to create a summary
 *		 of the quiz the user has taken
 *
 * @num: fleat variable, the percentage gotten from score
 *
 * Return: return nothing
*/

void get_summary(float num)
{

	if (num <= 39)
		printf("\033[0;31m%.f\033[0m", num);
	else if (num >= 40 && num <= 69)
		printf("\033[0;32m%.f\033[0m", num);
	else
		printf("\033[0;33m%.f\033[0m", num);
}
