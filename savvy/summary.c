static int score = get_score();

/**
 * get_percentage - function to calculate the percentage from score
 *
 * Return: return the percentage of the score
*/

float get_percentage(int num)
{
	float percentage = ((float) score / num) * 100;

	return (percentage);
}

char *get_summary(void)
{
	float percentage = get_percentage();

	if (percentage <= 40)
		char *fail[];
}
