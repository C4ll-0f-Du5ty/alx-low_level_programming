#include <stdio.h>
#include "main.h"

/**
* print_remaining_days - takes a date and prints how many days are
* left in the year, taking leap years into account
* @month: month in number format
* @day: day of month
* @year: year
* Return: void
*/

void print_remaining_days(int month, int day, int year)
{
	/**
	* f a year is divisible by 4, it is a leap year.
* However, if that year is also divisible by 100, it is not a leap year, unless
* If the year is divisible by 400, then it is a leap year.
*/
	if ((year % 4 == 0) || (year % 400 == 0 && year % 100 == 0))
	{
	if (month >= 2 && day >= 60)
	{
		day++;
	}

	printf("Day of the year: %d\n", day);
	printf("Remaining days: %d\n", 366 - day);
	}
	else
	{
	if (month == 2 && day == 60)
	{
		printf("Invalid date: %02d/%02d/%04d\n", month, day - 31, year);
	}
	else
	{
		printf("Day of the year: %d\n", day);
		printf("Remaining days: %d\n", 365 - day);
	}
	}
}
