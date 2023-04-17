#include <stdio.h>

#include "show_quiz.h"

/**
 * get_percentage - function to calculate the percentage from score
 *
 * Return: return the percentage of the score
*/

float get_percentage(void)
{
	int nm_questions, sccore, *p;
	float prcentage;

	p = get_num_score();
	nm_questions = p[0];
	sccore = p[1];

	prcentage = ((float) sccore / nm_questions) * 100;

	return (prcentage);
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
		printf("\033[0;31m%.f\033[0m\n", num);
	else if (num >= 40 && num <= 69)
		printf("\033[0;33m%.f\033[0m\n", num);
	else
		printf("\033[0;32m%.f\033[0m\n", num);
}

/**
 * summary - function to print the result of the quiz
 *	     as soon as the quiz has been taken
 *
 * Return: return nothing
*/

void summary(void)
{
	float perentage = get_percentage();

	if (perentage <= 39)
		printf(RED "%.f" DEFAULT "\n", perentage);
	else if (perentage >= 40 && perentage <= 69)
		printf(YELLOW "%.f" DEFAULT "\n", perentage);
	else
		printf(GREEN "%.f" DEFAULT "\n", perentage);
}
