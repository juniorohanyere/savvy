#include <stdio.h>
#include <stdlib.h>

#include "show_quiz.h"
#include "get_summary.h"
#include "date.h"
#include "time.h"
#include "colors.h"

/**
 * get_num_questions - function to get the number of questions
 *		       entered by the user for a particular quiz
 *
 * Return: return the number of questions entered
*/

int get_num_questions(void)
{
	int num_questions;
	int *p;

	p = get_num_score();
	num_questions = p[0];
	return (num_questions);
}

/**
 * summary - function to print the result of the quiz
 *	     as soon as the quiz has been taken
 *
 * Return: return nothing
*/

void summary(void)
{
	int sec = seconds(), min = minute(), hr = hour();
	int day_of_mon = day_of_month(), mon = month(), yr = year();
	int num_questions = get_num_questions(), score = get_score();
	int positive = is_positive(), negative = is_negative(), zero = is_zero();
	float percentage = get_percentage();
	char *flag;

	if (percentage <= 39)
		flag = RED;
	else if (percentage >= 40 && percentage <= 69)
		flag = YELLOW;
	else
		flag = GREEN;

	printf(GREEN);
	printf("\n"
		"|--------------------------------------------------------|\n"
		"| |--------<SUMMARY>--------<%02d-%02d-%04d %02d:%02d:%02d>--------|\n"
		"|--------------------------------------------------------|\n"
		"| " GREEN "~%-4d+" DEFAULT "%-4d" RED "-" DEFAULT
		"%-4d" YELLOW ":" DEFAULT "%-4d " GREEN "=" DEFAULT
		"%d\t\t\t%s%.2f%%" GREEN "\t |" DEFAULT "\n",
		day_of_mon, mon, yr, hr, min, sec,
		num_questions, positive, negative, zero, score, flag, percentage);
	printf("\n");
}
