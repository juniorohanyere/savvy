#include <stdio.h>
#include <stdlib.h>

#include "show_quiz.h"
#include "get_summary.h"
#include "date.h"
#include "time.h"
#include "colors.h"

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
	int zero = is_zero(); /* score = get_score(); */
	int positive = is_positive(), negative = is_negative();
	float perentage = get_percentage();

	if (perentage <= 39)
		printf(RED "%.f%%" DEFAULT "\n", perentage);
	else if (perentage >= 40 && perentage <= 69)
		printf(YELLOW "%.f%%" DEFAULT "\n", perentage);
	else
		printf(GREEN "%.f%%" DEFAULT "\n", perentage);
	printf(GREEN);
	printf("\n"
		"|--------------------------------------------------------|\n"
		"| |--------<SUMMARY>--------<%02d-%02d-%04d %02d:%02d:%02d>--------|\n"
		"|--------------------------------------------------------|\n"
		"| "
		GREEN "+" DEFAULT "%-4d" RED "-" DEFAULT "%-4d" YELLOW "~" DEFAULT "%-4d ",
		day_of_mon, mon, yr, hr, min, sec, positive, negative, zero);
	printf("\n");
}
