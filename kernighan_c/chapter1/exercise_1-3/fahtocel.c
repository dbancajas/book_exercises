#include<stdio.h>

//Question 1-3: Modify the temperature conversion program to print a heading
//above the table

int main(void){
	
	float lower, upper;
	float step;
	float celsius;
	
	step = 10.0;
	lower = 0.0;
	upper = 100.0;

	printf("Fahrenheit\tCelsius\n");

	while (lower <= upper){
		celsius = (5.0/9.0) * (lower - 32.0);

		printf("%.0f \t %.2f\n", lower, celsius);
		lower += step;	
	} 

}
