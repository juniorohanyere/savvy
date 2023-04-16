#include <ctype.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

#include "../quiz_ref/c/ref.h"
#include "../quiz/c/quiz.h"
#include "show_quiz.h"

static int score;

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
	int length, flag;

	length = strlen(str);

	for (int i = 0; i < length; i++)

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
 * random - Function to return a random number
 *
 * Description: Returns a random number
 *		between 0 and the total number of available  questions
 *		The total number of available questions
 *		denoted by range here, is gotten from the
 *		get_length function in the savvy/quiz/c/quiz.c file
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
 * Return: return nothing
*/

void get_questions(void)
{
	while (TRUE)
	{
		printf("Please enter your desired number of questions. ");
		printf("The recommended is also the minimum you can answer, ");
		printf("which is 10 >> ");

		int num_questions, flag;
		char str[1000];

		flag = scanf("%s", str);
		/* check if CTRL-D is entered, if so, the program should exit successfully */
		if (flag == EOF)

			exit(EXIT_SUCCESS);
		int _isnumber = isnumber(str);

		if (_isnumber == 1)
		{
			/* convert the string to integer */
			num_questions = atoi(str);

			if (num_questions >= 10)	/* Minimum required is 10 questions */
			{
				printf("\n\t\033[0;32m");
				printf("You Requested To Answer %d Questions\033[0m\n", num_questions);
				printf("\n");

				show_questions(num_questions);

				/* score and percentage should be printed at this point */
			}
			else
				printf("\n \033[0;31mInvalid input\033[0m\n\n");
		}
		else
			printf("\n \033[0;31mInvalid input\033[0m\n\n");
	}
}

/**
 * show_questions - function to display the questions to the standard output
 * @num: number of questions entered by user
 *	 in the questions_to_answer function
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
	char *pass = "\033[0;32mPassed\033[0m";
	char *fail_a = "\033[0;31mFailed \033[0;32m[a]\033[0m";
	char *fail_b = "\033[0;31mFailed \033[0;32m[b]\033[0m";
	char *fail_c = "\033[0;31mFailed \033[0;32m[c]\033[0m";

	for (int i = 0; i < num; i++)
	{
		int range = 10, j = i + 1;

		/* Display a question */
		const char *_question = question(_random());

		printf("\n");
		printf("%d. %s\n\n ", j, _question);

		/* creating a string variable to accept answers from user */
		char ans[1];

		int flag = scanf("%s", ans);

		if (flag == EOF)
			exit(EXIT_SUCCESS);

		/* validate if the answer is correct */
		const char *validator = answers(_random(), ans);

		printf(" %s\n", validator);
		if (strcmp(validator, pass) == 0)
			score = score + 1;
		else if (strcmp(validator, fail_a) == 0
		|| strcmp(validator, fail_b) == 0 || strcmp(validator, fail_c) == 0)
			score = score - 1;
		else
			score = score;
	}
<<<<<<< HEAD:lib/dht_lib.c
	float percentage = ((float) score / num) * 100;

	printf("\n\tScore = %d\n\tPercentage = %.f\n\n", score, percentage);
=======
}

/**
 * get_score - function to return score
 *
 * Return: return the score
*/

int get_score(void)
{
	return (score);
>>>>>>> dev:savvy/show_quiz.c
}
