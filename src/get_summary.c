#include <stdio.h>
#include <stdlib.h>

#include "show_quiz.h"

/**
 * get_score - function to get the score obtained
 *
 * Description: (see the show_quiz.c file)
 *
 * Return: return the score obtained from the show_questions function
*/

int get_score(void)
{
	int score;
	int *p;

	p = get_num_score();
	score = p[1];

	return (score);
}

/**
 * get_percentage - function to calculate the percentage from score
 *
 * Return: return the percentage of the score
*/

float get_percentage(void)
{
	int num_question, score;
	int *p;
	float percentage;

	p = get_num_score();
	num_question = p[0];
	score = get_score();
	percentage = ((float) score / num_question) * 100;

	return (percentage);
}

/**
 * is_positive - function to get the number of right answers
 *
 * Return: return the numbet of correct answers
*/

int is_positive(void)
{
	int positive;
	int *p;

	p = get_num_score();
	positive = p[2];

	return (positive);
}

/**
 * is_negative - function to get the number of wrong answers
 *
 * Return: return the number incorrect answers
*/

int is_negative(void)
{
	int negative;
	int *p;

	p = get_num_score();
	negative = p[3];

	return (negative);
}

/**
 * is_zero - function to get the number of answers without mark
 *
 * Return: return the number of answers with no mark
*/

int is_zero(void)
{
	int zero;
	int *p;

	p = get_num_score();
	zero = p[4];

	return (zero);
}
