#include <ctype.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

#include "ref.h"
#include "quiz.h"
#include "show_quiz.h"
#include "summary.h"
#include "colors.h"

static int num_questions, score;
static int plus, minus, zero;
static float percentage;

/**
 * isnumber - User defined function
 *
 * @str: String variable to check and validate
 *
 * Description: A function to check and validate
 *              if input contains letters or not
 *
 * Return: Returns 0 or 1
*/

int isnumber(char str[])
{
	int length, i, flag;

	length = strlen(str);

	for (i = 0; i < length; i++)

	{
		/**
		 * if a character is an integer, the isdigit function returns 0.
		 * otherwise, it returns a value greater than 0
		 * for alphabets and special characters respectively
		*/

		if (isdigit(str[i]))
			flag = 1;
		else
		{
			flag = 0;
			break;	/**
				 * Breaks loop once a character is not an integer
				 * to avoid junks in system memory
				*/
		}

	}
	if (flag == 1)
		return (1);
	else
		return (0);
}

/**
 * _random - Function to return a random number
 *
 * Description: Returns a random number
 *		between 0 and the total number of available  questions
 *		The total number of available questions
 *		denoted by range here, is gotten from the
 *		get_length function (see get_length function from this file)
 *
 * Return: Return random number
*/

int _random(void)
{
	int range = get_length();

	srand((unsigned int)time(NULL));

	return (rand() % range);
}

/**
 * get_questions - function to accept number of questions,
 *			 to be answered, from user
 *
 * @str: variable to retrieve third command line argument
 *
 * Description: the @str is the number of questions to be answered
 *		which is converted into an integer if it does not contain letters
 *
 * Return: return nothing
*/

void get_questions(char str[])
{
	int _isnumber;

	while (TRUE)
	{
		/**
		 * printf("Please enter your desired number of questions. ");
		 * printf("The recommended is also the minimum you can answer, ");
		 * printf("which is 10 >> ");
		*/

		_isnumber = isnumber(str);

		if (_isnumber == 1)
		{
			/* convert the string to integer */
			num_questions = atoi(str);

			if (num_questions >= 10)	/* Minimum required is 10 questions */
			{
				printf("\n" GREEN);
				printf("\tYou Requested To Answer %d Questions", num_questions);
				printf(DEFAULT "\n\n");

				show_questions(num_questions);
			}
			else
				printf(RED "\n Invalid input" DEFAULT "\n\n");
		}
		else
			printf(RED "\n Invalid input" DEFAULT "\n\n");
	}
}

/**
 * show_questions - function to display the questions to the standard output
 * @num: number of questions entered by user
 *	 (see questions_to_answer function from this file)
 *
 * Description: displays the quetions based on the amount of question
 *		the user specified. Then validates if the answer
 *		corresponding to a question is correct
 *		if correct, the user is credited with a +1 mark
 *		if incorrect, a -1 mark is added. If the user answers with the option 'd',
 *		no mark will be added nor deducted
 *
 * Return: return nothing
*/

void show_questions(int num)
{
	int i, j, _rand, flag;
	char *ans;
	const char *validator, *_question;

	ans = malloc(sizeof(char));
	plus = minus = zero = 0;
	for (i = 0; i < num; i++)
	{
		_rand = _random();
		j = i + 1;

		/* Display a question */
		_question = question(_rand);
		printf("\n");
		printf("%d. %s\n\n ", j, _question);

		/* creating a string variable to accept answers from user */
		flag = scanf("%s", ans);
		if (flag == EOF)
			exit(EXIT_SUCCESS);

		/* validate if the answer is correct */
		validator = answers(_rand, ans);
		printf(" %s\n", validator);
		if (strcmp(validator, PASS) == 0)
			score = score + 1, plus++;
		else if (strcmp(validator, FAIL_A) == 0
		|| strcmp(validator, FAIL_B) == 0 || strcmp(validator, FAIL_C) == 0)
			score = score - 1, minus++;
		else
			score = score + 0, zero++;
	}
	percentage = ((float) score / num_questions) * 100;
	print_summary();
	score = plus = minus = zero = 0;
	free(ans);
}

/**
 * get_summary - function to assign values to a struct elements
 *
 * Description: assigns values to the elements
 *		of the get_summary_elements struct
 * Return: return a pointer to the get_summary_elements struct (get_summary_t)
*/

get_summary_t *get_summary(void)
{
	/* define a pointer to the get_summary_elements struct */
	get_summary_t *elements;

	/* allocate enough memory for the struct pointer */
	elements = malloc(sizeof(get_summary_t));

	/* assign the values */
	elements->num_questions = num_questions;
	elements->score = score;
	elements->percentage = percentage;
	elements->plus = plus;
	elements->minus = minus;
	elements->zero = zero;
	return (elements);
	free(elements);
}
