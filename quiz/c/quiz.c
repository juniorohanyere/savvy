#include <stdio.h>

/* questions here */

const char *questions[] = {

	/* index 0 */

	"What is the right statement to print 'Hello, World' to standard output in C ?\n\n"
	"a. printf(\"Hello, World\");\n"
	"b. print(\"Hello, World\")\n"
	"c. printf(Hello, World);\n"
	"d. I don't know",

	/* index 1 */

	"How do you initialize an integer in C ?\n\n"
	"a. int num = 0;\n"
	"b. char num = 0;\n"
	"c. num = ;\n"
	"d. I don't know",

	/* index 2 */

	"What is the use of printf statement in C ?\n\n"
	"a. To assign a value to an integer variable\n"
	"b. To display a text to the standard output\n"
	"c. To initialize a variable\n"
	"d. I don't know",

	/* index 3 */

	"What is the output of the following code ?\n\n"
	"char str[20] = \"Hello, World\";\n"
	"printf(\"%s\", str[4]);\n\n"
	"a. o\n"
	"b. d\n"
	"c. ,\n"
	"d. I don't know",

	/* index 4 */

	"Which of the following statements is correct ?\n\n"
	"a. int num\n   scanf(\"%d\", &num);\n\n"
	"b. int num;\n   scanf(\"%d\", &num);\n\n"
	"c. int num\n   scanf(\"%d\", &num)\n\n"
	"d. I don't know",

	/* index 5 */

	"What is the right order for compilation of a C program ?\n\n"
	"a. preprocess, compile, link, assembly\n"
	"b. preprocess, assembly, compile, link\n"
	"c. preprocess, compile, assembly, link\n"
	"d. I don't know",

	/* index 6 */

	"Which of the following is a valid FOR statement in C ?\n\n"
	"a. for (int a = 0; a < b; a ++)\n   {\n\tprintf(\"%d\", a);\n   }\n\n"
	"b. for (int a == 0; a < b; a++)\n   {\n\tprintf(\"%d\", a);\n   }\n\n"
	"c. for (int a = 0; a < b; a++)\n   {\n\tprintf(\"%d\", a);\n   }\n\n"
	"d. I don't know",

	/* index 7 */

	"Source codes in C have which of the following extensions ?\n\n"
	"a. .f extension\n"
	"b. .d extension\n"
	"c. .c extension\n"
	"d. I don't know",

	/* index 8 */

	"How do you construct an increment statement for 'x' in C ?\n\n"
	"a. xx;\n"
	"b. x + 1;\n"
	"c. x++;\n"
	"d. I don't know",

	/* index 9*/

	"How do you construct a decrement statement for 'x' in C ?\n\n"
	"a. x !-;\n"
	"b. x--;\n"
	"c. x-_;\n"
	"d. I don't know",

	/* index 10 */

	"What is the equivalent code of the following statement in WHILE LOOP format ?\n\n"
	"\tfor (a = 1; a <= 100; a++)\n\t\tprintf(\"%d\", a * a);\n\n"
	"a. while (a)\n   {\n\tprintf(\"%d\", a * a);\n\ta++;\n   }\n\n"
	"b. while (a <= 100)\n   {\n\tprintf(\"%d\", a + a);\n\ta++;\n   }\n\n"
	"c. while (a <= 100)\n   {\n\tprintf(\"%d\", a * a);\n\ta++;\n   }\n\n"
	"d. I don't know",

	/* index 11 */

	"What will be the outcome of the following conditional statement if the value of variable s is 10?\n\n"
	"\ts >= 10 && s < 25 && s != 12\n\n"
	"a. TRUE\n"
	"b. FALSE\n"
	"c. NULL\n"
	"d. I don't know",

	/* index 12 */

	"Which of the following best describes the order of precedence with regards to operators in C?\n\n"
	"a. unary, mathematical, equality, relational, assignment, logical\n"
	"b. unary, mathematical, relational, equality, logical, assignment\n"
	"c. mathematical, relational, logical, assignment, equality, unary\n"
	"d. I don't know",

	/* index 13 */

	"What is wrong with this statement? myName = \"Robin\";\n\n"
	"a. nothing is wrong with the statement\n"
	"b. an equality operator is supposed to be used to assign a value to the string variable\n"
	"c. an assignment operator cannot be used to assign a value to the string variable\n"
	"d. I don't know",

	/* index 14 */

	"How do you determine the length of a string value that was stored in a variable?\n\n"
	"a. the use of the strlen() function\n"
	"b. the use of the strcpy() function\n"
	"c. the use of the scanf() function\n"
	"d. I don't know",
};

/**
 * question - User defined fuction, entry for questions
 *
 * @num: First parameter - Locates a paticular question
 *			   by it's address in the list,
 *			   expected to be a generated random number
 *
 * Description: Contains the questions to be answered
 *
 * Return: Return question
*/

const char *question(int num)
{
	return (questions[num]);
}

/**
 * get_length - function to get the total length
 *		of the questions array
 *
 * Description: should be used in place of the manual
 *		assignment of range value in the
 *		show_questions function in the
 *		savvy/savvy/sho_quiz.c file
 *
 * Return: return the length of the questions array
*/

int get_length(void)
{
	return (*(&questions + 1) - questions);
}
