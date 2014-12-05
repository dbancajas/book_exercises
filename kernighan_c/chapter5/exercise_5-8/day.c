#include<stdio.h>


//Exercise 5-8: Add error checking for day_of_year and month_day
//
//
//Answer: day should be in the valid range for each month, and month should also be valid, year should be at least 0?



static char daytab[2][13] = { 
	{0,31,28,31,30,31,30,31,31,30,31,30,31},
	{0,31,29,31,30,31,30,31,31,30,31,30,31}
};


int day_of_year(int year, int month, int day){
	int i, leap;
	leap = ((year % 4) == 0 && (year %100) !=0) || year % 400 == 0;

	if(day < 0 || day > daytab[leap][month] || month < 1 || month > 12 || year  < 0 )
		return -1;

	for (i=1; i < month; i++)
		day+=daytab[leap][i];
	return day;
}


void month_day(int year, int yearday, int *pmonth, int *pday){
	int i,leap;
	leap = (year%4 == 0 && year % 100 != 0) || year%400==0;

	for (i=1; yearday > daytab[leap][i]; i++)
		yearday -= daytab[leap][i];

	*pmonth = i;
	*pday = yearday;
}

int main (void) {


	return 0;
}
