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
	int days_in_month[] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
	int days_left = 0;
	int i;

	/* Calculate the number of days left in the year */
	for (i = month - 1; i < 12; i++)
	{
	days_left = days_left +  days_in_month[i];
	}

	days_left = days_left - day;

	/* Add an extra day for leap years */
	if (((year % 4 == 0) && (year % 100 != 0)) || (year % 400 == 0))
	{
	if (month < 2 && day == 29)
	{
	days_left++;
	}
	}

	/* Print the results */
	printf("Day of the year: %d\n", convert_day(month, day));
	printf("Remaining days: %d\n", days_left);
}
