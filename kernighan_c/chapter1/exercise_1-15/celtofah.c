#include<stdio.h>

//Question 1-15: Rewrite the temperature conversion program of Section 1.2 to
//use a function for conversion

float convert(float cel){
	return (9.0/5.0) * cel + 32.0;
}

int main(void){
	
	float lower, upper;
	float step;
	float fahr;
	
	step = 10.0;
	lower = 0.0;
	upper = 100.0;

	printf("Celsius\tFahrenheit\n");

	while (lower <= upper){
		fahr = convert(lower);

		printf("%.0f \t %.2f\n", lower, fahr);
		lower += step;	
	} 

}
