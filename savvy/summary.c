#include "show_quiz.c"

/**
 * get_percentage - function to calculate the percentage from score
 *
 * Return: return the percentage of the score
*/

float get_percentage(void)
{
	int num_questions, score, *p;
	float percentage;

	p = get_num_score();
	num_questions = p[0]
	score = p[1];

	percentage = ((float) score / num_questions) * 100;

	return (percentage);
}

/**
 * get_summary - function to create a summary
 *		 of the quiz the user has taken
 *
 * @num: float variable, the percentage gotten from score
 *
 * Description: (see get_percentage function from this file)
 *
 * Return: return nothing
*/

void get_summary(float num)
{

	if (num <= 39)
		printf("\033[0;31m%.f\033[0m", num);
	else if (num >= 40 && num <= 69)
		printf("\033[0;33m%.f\033[0m", num);
	else
		printf("\033[0;32m%.f\033[0m", num);
}

/**
 * summary - function to print the result of the quiz
 *	     as soon as the quiz has been taken
 *
 * Return: return nothing
*/

void summary(void)
{
	float percentage = get_percentage();

	if (percentage <= 39)
		printf("\033[0;31m%.f\033[0m", percentage);
	else if (percentage >= 40 && <= 69)
		printf("\033[0;33m%.f\033[0m", percentage);
	else
		printf("\033[0;32m%.f\033[0m", percentage);
}
