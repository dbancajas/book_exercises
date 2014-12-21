#include<stdio.h>


//Exercise 5-9: Rewrite routines day_of_year and month_day as pointers
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

//we used pointers for month and day since we want to "return" two values to the caller.
//I have changed the return type to signal ERROR or not by returning a negative number for error.

int month_day(int year, int yearday, int *pmonth, int *pday){
	int i,leap;
	leap = (year%4 == 0 && year % 100 != 0) || year%400==0;

	if (year < 0 || yearday < 1 || yearday > (leap? 366: 365))
		return -1;

	for (i=1; yearday > daytab[leap][i]; i++)
		yearday -= daytab[leap][i];

	*pmonth = i;
	*pday = yearday;
	return 0;
}

int main (void) {

	int year = 2008;
	int month = 12;
	int day = 31;

	int month2=0;
	int day2=0;

	int myday = day_of_year(year,month,day);

	int error2 = month_day(year,myday,&month2,&day2);

	if (!myday)
		printf("something wrong with month:%d, day:%d, year:%d\n", month,day,year);
	else
		printf("%d-%d-%d is the %d day of the year\n",month,day,year,myday );


	if(!error2)
		printf("%d day of the year for year %d is %d-%d\n",myday, year, month2,day2);
	else
		printf("something wrong with %d day of the year. maybe not a valid value?\n",myday);



	return 0;
}
