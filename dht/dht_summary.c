/**
 * get_percentage - function to calculate the percentage from score
 *
 * Return: return the percentage of the score
*/

float get_percentage(int num)
{
	int score = get_score();
	float percentage = ((float) score / num) * 100;

	return (percentage);
}
