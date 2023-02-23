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
    int days_in_feb = 28;

    if (year % 4 == 0)
    {
        if (year % 100 == 0)
        {
            if (year % 400 == 0)
            {
                days_in_feb = 29;
            }
        }
        else
        {
            days_in_feb = 29;
        }
    }

    if (month < 1 || month > 12)
    {
        printf("Invalid date: %02d/%02d/%04d\n", month, day, year);
        return;
    }

    if (day < 1 || day > 31)
    {
        printf("Invalid date: %02d/%02d/%04d\n", month, day, year);
        return;
    }

    if (month == 2 && day > days_in_feb)
    {
        printf("Invalid date: %02d/%02d/%04d\n", month, day, year);
        return;
    }

    int day_of_year = 0;
    for (int m = 1; m < month; m++)
    {
        if (m == 2)
        {
            day_of_year += days_in_feb;
        }
        else if (m == 4 || m == 6 || m == 9 || m == 11)
        {
            day_of_year += 30;
        }
        else
        {
            day_of_year += 31;
        }
    }

    day_of_year += day;

    if (days_in_feb == 28 && day_of_year > 365)
    {
        printf("Invalid date: %02d/%02d/%04d\n", month, day, year);
        return;
    }
    else if (days_in_feb == 29 && day_of_year > 366)
    {
        printf("Invalid date: %02d/%02d/%04d\n", month, day, year);
        return;
    }

    printf("Day of the year: %d\n", day_of_year);
    printf("Remaining days: %d\n", days_in_feb == 28 ? 365 - day_of_year : 366 - day_of_year);
}

