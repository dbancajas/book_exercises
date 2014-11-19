#include<stdio.h>

//Question 1-4: Write a program to print the corresponding Celsius to
//Fahrenheit table.

int main(void){
	
	float lower, upper;
	float step;
	float fahr;
	
	step = 10.0;
	lower = 0.0;
	upper = 100.0;

	printf("Celsius\tFahrenheit\n");
	while (lower <= upper){
		fahr = (9.0/5.0) * lower + 32;

		printf("%.0f \t %.2f\n", lower, fahr);
		lower += step;	
	} 

}
