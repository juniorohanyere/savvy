#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include "show_quiz.h"
#include "get_summary.h"
#include "date.h"
#include "time.h"
#include "colors.h"

#define FORMAT_T str

/*void handle_width(float num);*/

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
	int length, i;
	static int j;
	char str[sizeof(int) * 10] = "%", s[sizeof(int) * 10] = " ";

	summary = get_summary();
	if (summary->percentage <= 39)
		flag = RED;
	else if (summary->percentage >= 40 && summary->percentage <= 69)
		flag = YELLOW;
	else
		flag = GREEN;

	printf(GREEN);
	printf("\n"
		"|--------------------------------------------------------|\n"
		"| |--------<SUMMARY>--------<%02d-%02d-%04d %02d:%02d:%02d>--------|\n"
		"|--------------------------------------------------------|\n"
		"| " GREEN "~%d\t+" DEFAULT "%d\t" RED "-" DEFAULT
		"%d\t" YELLOW ":" DEFAULT "%d\t" GREEN "=" DEFAULT "%d\t%s",
		day_of_mon, mon, yr, hr, min, sec,
		summary->num_questions, summary->plus, summary->minus,
		summary->zero, summary->score, flag);
	sprintf(s, "%.2f", summary->percentage);
	length = strlen(s);
	i = 3;
	j = 20;
	while (i <= length)
	{
		i++;
		j--;
	}
	sprintf(s, "%d", j);
	strcat(str, s);
	strcat(str, ".2f%%");
	printf(FORMAT_T, summary->percentage);
	printf(GREEN "|" DEFAULT "\n");

}

/**
 * handle_width - function to return the length of the percentage
 *
 * Return: always return 0
*/

/*void handle_width(float num)
{

}
*/
