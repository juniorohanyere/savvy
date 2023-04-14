#include <stdio.h>

/* questions here */

static char *questions[1000] = {

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
	"\tfor (a = 1; a <= 100; a++)\n\tprintf(\"%d\n\", a * a);\n\n"
	"a. while (a)\n{\n\tprintf(\"%d\n\", a * a);\n\ta++;\n}\n\n"
	"b. while (a <= 100)\n{\tprintf(\"%d\n\", a + a);\n\ta++;\n}\n\n"
	"c. while (a <= 100)\n{\tprintf(\"%d\n\", a * a);\n\ta++;\n}\n\n"
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
