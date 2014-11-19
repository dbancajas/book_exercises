#include<stdio.h>

//Question 1-5:  Modify the temperature program to print the table in reverse
//order, that is from 300 degrees to 0.

int main(void){
	
	float lower, upper;
	float step;
	float fahr;
	
	step = 10.0;
	lower = 0.0;
	upper = 100.0;

	printf("Celsius\tFahrenheit\n");

	for (upper=300.0; upper >= lower; upper -= step){
		fahr = (9.0/5.0) * upper + 32;
		printf("%.0f \t %.2f\n", upper, fahr);
	} 

}
