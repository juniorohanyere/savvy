#include <stdio.h>
#include <time.h>

/**
 * day - function to get current day of week
 *
 * Description: day of week is formatted in 'Www'
 *
 * Return: return the current day of the week
*/

const char *day(void)
{
	time_t t;

	time(&t);

	char *date_time = ctime(&t);
	char _day[3], *Www;

	_day[0] = *date_time;
	_day[1] = *(date_time + 1);
	_day[2] = *(date_time + 2);

	Www = _day;

	return (Www);
}

/**
 * month - function to get the current month of the year
 *
 * Description: month is formatted in 'Mmm'
 *
 * Return: return the current month of the year
*/

const char *month(void)
{
	time_t t;

	time(&t);
	char *date_time = ctime(&t);
	char _month[3], *Mmm;

	_month[0] = *(date_time + 4);
	_month[1] = *(date_time + 5);
	_month[2] = *(date_time + 6);

	Mmm = _month;

	return (Mmm);
}

/**
 * day_of_month - function to get the current day of the month
 *
 * Description: the day of the month is a two digit numbers formatted in 'DD'
 *
 * Return: return the current day of the month
*/

const char *day_of_month(void)
{
	time_t t;

	time(&t);
	char *date_time = ctime(&t);
	char _day_of_month[2], *dd;

	_day_of_month[0] = *(date_time + 8);
	_day_of_month[1] = *(date_time + 9);

	dd = _day_of_month;

	return (dd);
}

/**
 * _time - function to get the current time of the day
 *
 * Description: time is in digital format, formatted in 'HH:MM'
 *
 * Return: return the current time of the day
*/

const char *_time(void)
{
	time_t t;

	time(&t);
	char *date_time = ctime(&t);
	char _time_[5], *hhmm;

	_time_[0] = *(date_time + 11);
	_time_[1] = *(date_time + 12);
	_time_[2] = *(date_time + 13);
	_time_[3] = *(date_time + 14);
	_time_[4] = *(date_time + 15);

	hhmm = _time_;
	return (hhmm);
}

/**
 * year - function to get the current year
 *
 * Description: year is in four digits, formatted in 'YYYY'
 *
 * Return: return the current year
*/

const char *year(void)
{
	time_t t;

	time(&t);
	char *date_time = ctime(&t);
	char _year[4], *yyyy;

	_year[0] = *(date_time + 20);
	_year[1] = *(date_time + 21);
	_year[2] = *(date_time + 22);
	_year[3] = *(date_time + 23);

	yyyy = _year;
	return (yyyy);
}

int main(void)
{
	printf("%s\n%s\n%s\n%s\n%s\n", day(), month(), day_of_month(), _time(), year());
	return (0);
}
