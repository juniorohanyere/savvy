#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include "show_quiz.h"
#include "get_summary.h"
#include "date.h"
#include "time.h"
#include "colors.h"
#include "summary.h"

/**
 * print_summary - function to print the result of the quiz
 *	     as soon as the quiz has been taken
 *
 * Return: return nothing
*/

void print_summary(void)
{
	get_summary_t *summary;
	int sec = seconds(), min = minute(), hr = hour();
	int day_of_mon = day_of_month(), mon = month(), yr = year();
	char *flag;

	summary = get_summary();
	if (summary->percentage <= 39)
		flag = RED;
	else if (summary->percentage >= 40 && summary->percentage <= 69)
		flag = YELLOW;
	else
		flag = GREEN;

	printf(GREEN);
	printf("\n"
		"+--------------------------------------------------------+\n"
		"| |--------<SUMMARY>--------<%02d-%02d-%04d %02d:%02d:%02d>------| |\n"
		"+--------------------------------------------------------+\n"
		"| " GREEN "~%d\t+" DEFAULT "%d\t" RED "-" DEFAULT
		"%d\t" YELLOW ":" DEFAULT "%d\t" GREEN "=" DEFAULT
		"%d\t%s%15.2f%%" GREEN " |\n"
		"+--------------------------------------------------------+\n" DEFAULT,
		day_of_mon, mon, yr, hr, min, sec,
		summary->num_questions, summary->plus, summary->minus,
		summary->zero, summary->score, flag, summary->percentage);
		printf("\n");
}
