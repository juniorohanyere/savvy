#include <time.h>

/**
 * day_of_month - function to get current day of month
 *
 * Description: day of week is in two digits, formatted in 'DD'
 *
 * Return: return the current day of the month
*/

int day_of_month(void)
{
	time_t t = time(NULL);
	struct tm date_time = *localtime(&t);
	int _day_of_month = date_time.tm_mday;

	return (_day_of_month);
}

/**
 * month - function to get the current month of the year
 *
 * Description: month is in two digits, formatted in 'MM'
 *
 * Return: return the current month of the year
*/

int month(void)
{
	time_t t = time(NULL);
	struct tm date_time = *localtime(&t);
	int _month = date_time.tm_mon + 1;

	return (_month);
}

/**
 * year - function to get the current year
 *
 * Description: year is in four digits, formatted in 'YYYY'
 *
 * Return: return the current year
*/

int year(void)
{
	time_t t = time(NULL);
	struct tm date_time = *localtime(&t);
	int _year = date_time.tm_year + 1900;

	return (_year);
}
