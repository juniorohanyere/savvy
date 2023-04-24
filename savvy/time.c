#include <time.h>

/**
 * seconds - funciton to get the current seconds of the minute
 *
 * Return: return the current seconds in two digits
*/

int seconds(void)
{
	time_t t;
	struct tm date_time;
	int _seconds;

	t = time(NULL);
	date_time = *localtime(&t);
	_seconds = date_time.tm_sec;
	return (_seconds);
}

/**
 * minute - function to get the current minute of the hour
 *
 * Return: return current minute in two digits
*/

int minute(void)
{
	time_t t;
	struct tm date_time;
	int _minute;

	t = time(NULL);
	date_time = *localtime(&t);
	_minute = date_time.tm_min;
	return (_minute);
}

/**
 * hour - function to get current hour of the day
 *
 * Return: return current hour in two digits
*/

int hour(void)
{
	time_t t;
	struct tm date_time;
	int _hour;

	t = time(NULL);
	date_time = *localtime(&t);
	_hour = date_time.tm_hour;
	return (_hour);
}
