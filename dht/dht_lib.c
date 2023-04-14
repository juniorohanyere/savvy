#include <ctype.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>
#include "../answers/dht_answers_c.h"
#include "../questions/dht_questions_c.h"
#include "dht_lib.h"

/**
 * _isnumber - User defined function
 *
 * @str: String variable to check and validate
 *
 * Description: A function to check and validate
 *              if input contains letters or not
 *
 * Return: Returns 0 or 1
*/

int _isnumber(char str[])
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
 * _rand - Function to return a random number
 * @num: First and only parameter, the total number of questions
 *
 * Description: Returns a random number
 *		between 0 and the total number of questions
 *
 * Return: Return random number
*/

int _rand(int num)
{
	srand((unsigned int)time(NULL));

	return (rand() % num);
}

/**
 * questions_to_answer - function to accept number of questions,
 *			 to be answered, from user
 *
 * Return: return nothing
*/

void questions_to_answer(void)
{
	while (1)
	{
		printf("Please enter your desired number of questions. ");
		printf("The recommended is also the minimum you can answer, ");
		printf("which is 10 >> ");

		int num_questions, flag;
		char str[1000];

		flag = scanf("%s", str);

		if (flag == EOF)	/**
					 * checks if ctrl-D is entered
					 * if so, the program exits
					*/

			exit(EXIT_SUCCESS);

		int isnumber = _isnumber(str);

		if (isnumber == 1)
		{
			/* convert the string to integer */
			num_questions = atoi(str);

			if (num_questions >= 10)	/* Minimum required is 10 questions */
			{
				printf("\n\t\033[0;32m");
				printf("You Requested To Answer %d Questions\033[0m\n", num_questions);
				printf("\n");

				show_questions(num_questions);
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
	int score = 0, flag;
	char *pass = "\033[0;32mPassed\033[0m";
	char *fail_a = "\033[0;31mFailed \033[0;32m[a]\033[0m";
	char *fail_b = "\033[0;31mFailed \033[0;32m[b]\033[0m";
	char *fail_c = "\033[0;31mFailed \033[0;32m[c]\033[0m";

	for (int i = 0; i < num; i++)
	{
		int range = 10, random = _rand(range), j = i + 1;

		/* Display a question */
		const char *_question = question(random);

		printf("\n");
		printf("%d. %s\n\n ", j, _question);

		/* creating a string variable to accept answers from user */
		char ans[1];

		flag = scanf("%s", ans);

		if (flag == EOF)
			exit(EXIT_SUCCESS);

		/* validate if the answer is correct */
		const char *validator = answers(random, ans);

		printf(" %s\n", validator);
		if (strcmp(validator, pass) == 0)
			score = score + 1;
		else if (strcmp(validator, fail_a) == 0
		|| strcmp(validator, fail_b) == 0 || strcmp(validator, fail_c) == 0)
			score = score - 1;
		else
			score = score;
	}
	float percentage = ((float) score / num) * 100;

	printf("\n\tScore = %d\n\tPercentage = %.f\n\n", score, percentage);
}
