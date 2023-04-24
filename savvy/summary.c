#include <stdio.h>

#include "show_quiz.h"
#include "summary.h"
#include "date.h"
#include "time.h"
#include "colors.h"

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
	num_questions = p[0];
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
		printf(RED "%.f" DEFAULT "\n", num);
	else if (num >= 40 && num <= 69)
		printf(YELLOW "%.f" DEFAULT "\n", num);
	else
		printf(GREEN "%.f"DEFAULT "\n", num);
}

/**
 * summary - function to print the result of the quiz
 *	     as soon as the quiz has been taken
 *
 * Return: return nothing
*/

void summary(void)
{
	int sec = seconds();
	int min = minute();
	int hr = hour();
	int day_of_mon = day_of_month();
	int mon = month();
	int yr = year();
	float perentage = get_percentage();

	printf(GREEN);
	printf(
	"|--------------------------------------------------------|\n"
	"| |--------<SUMMARY>--------<%02d-%02d-%04d %02d:%02d:%02d>--------|\n"
	"|--------------------------------------------------------|\n"
	"| ", day_of_mon, mon, yr, hr, min, sec);
	if (perentage <= 39)
		printf(RED "%.f" DEFAULT "\n", perentage);
	else if (perentage >= 40 && perentage <= 69)
		printf(YELLOW "%.f" DEFAULT "\n", perentage);
	else
		printf(GREEN "%.f" DEFAULT "\n", perentage);
}
/* day_of_mon, mon, yr, hr, min, sec */
