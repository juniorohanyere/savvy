#ifndef SHOW_QUIZ_H
#define SHOW_QUIZ_H

#define TRUE 1

/**
 * struct get_summary_elements - type definition
 *				 for a get_summary_elements struct
 *
 * @num_questions: the number of questions to answer
 *		   entered by the user
 * @score: the resulting total of the marks obtained
 * @percentage: the resulting percentage value gotten from
 *		the score over the number of questions entered
 * @plus: +1 marks obtained
 * @minus: -1 marks obtained
 * @zero: 0 marks obtained
*/

typedef struct get_summary_elements
{
	int num_questions, score;
	int plus, minus, zero;
	float percentage;
} get_summary_t;

int isnumber(char str[]);
int _random(void);
void get_questions(void);
void show_questions(int num);
get_summary_t *get_summary(void);

#endif	/* SHOW_QUIZ_H */
