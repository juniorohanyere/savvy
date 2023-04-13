#include <stdio.h>
#include <time.h>
#include <string.h>

/*time_t t;

time(&t);

char *date_time = ctime(&t);*/
static char _day[3];
static char _month[3];
static char _day_of_month[2];
static char _time_[5];
static char _year[4];

/*_day[0] = *date_time;
_day[1] = *(date_time + 1);
_day[2] = *(date_time + 2);

_month[0] = *(date_time + 4);
_month[1] = *(date_time + 5);
_month[2] = *(date_time + 6);

_day_of_month[0] = *(date_time + 8);
_day_of_month[1] = *(date_time + 9);

_time_[0] = *(date_time + 11);
_time_[1] = *(date_time + 12);
_time_[2] = *(date_time + 13);
_time_[3] = *(date_time + 14);
_time_[4] = *(date_time + 15);

_year[0] = *(date_time + 20);
_year[1] = *(date_time + 21);
_year[2] = *(date_time + 22);
_year[3] = *(date_time + 23);
*/

/**
 * day - function to get current day of week
 *
 * Description: day of week is formatted in 'Www'
 *
 * Return: return the current day of the week
*/
static char *we(void)
{
	time_t t;
	time(&t);
	char *date_time = ctime(&t);
	static char str[100];

	for (int i = 5; i <= 8; i++)
	{
		str[i] = *(date_time + i);
	}
	return (str);
}

static char *day(void)
{
	static char see[3];
	//see[0 = we();

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
	//static char _month[3];

	_month[0] = *(date_time + 4);_day_of_month[0] = *(date_time + 8);
        _day_of_month[1] = *(date_time + 9);
	_month[1] = *(date_time + 5);
	_month[2] = *(date_time + 6);

	return (_month);
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
	//static char _day_of_month[2], *dd;

	_day_of_month[0] = *(date_time + 8);
	_day_of_month[1] = *(date_time + 9);

	//dd = _day_of_month;

	return (_day_of_month);
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
	//static char _time_[5], *hhmm;

	_time_[0] = *(date_time + 11);
	_time_[1] = *(date_time + 12);
	_time_[2] = *(date_time + 13);
	_time_[3] = *(date_time + 14);
	_time_[4] = *(date_time + 15);

	//hhmm = _time_;
	return (_time_);
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
	//static char _year[4], *yyyy;

	_year[0] = *(date_time + 20);
	_year[1] = *(date_time + 21);
	_year[2] = *(date_time + 22);
	_year[3] = *(date_time + 23);

	//yyyy = _year;
	return (_year);
}

int main(void)
{
	/*const char *__day = day(); //, month(), day_of_month(), _time(), year());
	const char *__month = month();
	const char *__day_of_month = day_of_month();
	const char *__time = _time();
	const char *__year = year();
	const char *_we = we();*/

	/*printf("%.3s ", __day);
	printf("%.3s ", __month);
	printf("%.2s ", __day_of_month);
	printf("%.5s ", __time);
	printf("%.4s %s", __year, _we);

	char s[100];

	strcpy(s, __day);

	printf("Okay!! %c", s[2]);
	//month();*/

	printf("%s\n%s\n", we(), day());
	return (0);
}
