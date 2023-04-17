/**
 * home - function to print a short description
 *	  of the savvy program to the standard output
 *
 * Description: (see command function in ../savvy.c file)
 *
 * Return: return nothing
*/

void home(void)
{
	printf("Welcome to savvy\n");
	printf("Savvy is a command line program.\n");
	printf("Aimed at increasing the tendency");
	printf("At which programmers, expecially newbies learn");

	printf("Please use the \033[0;32m'-h'\032[0m ");
	printf("or \033[0;33m'--help'\033[0m option ");
	printf("to view a list of available commands and their use.");
}
