#include<stdio.h>
#include<limits.h>

//Question 2-1: Write a program to determine the ranges of char, short, int and long
//variables, both signed and unsigned, by printing approprate values from
//standard headers and by direct computation. harder if you compute them:
//determine the ranges of the various floating-point types.


int main(void){
	char s;
	printf("char: %d to %d\n",CHAR_MIN, CHAR_MAX);
	printf("short: %d to %d\n",SHRT_MIN, SHRT_MAX);
	printf("long: %ld to %ld\n",LONG_MIN, LONG_MAX);
	printf("int: %d to %d\n",INT_MIN, INT_MAX);
	printf("unsigned long: %lu \n", ULONG_MAX);
	
	return 0;
}
