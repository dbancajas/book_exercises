#include<stdio.h>
#include<ctype.h>

//Exercise 4-2: Extend atof to handle scientific notation of the form 123.45e-6
//where a floating number may be followed by e or E and an optionally signed
//exponent

double atof(char s[])
{
	double val,power;
	int i, sign;

	for (i=0; isspace(s[i]);i++);

	sign = (s[i]=='-')?-1:1;
	
	if (s[i]=='+' || s[i]=='-')
		i++;

	for (val = 0.0; isdigit(s[i]); i++)
		val=10.0 * val + (s[i]-'0');

	if (s[i] == '.')
		++i;

	for (power = 1.0; isdigit(s[i]); i++){
		val = 10.0 * val + (s[i]-'0');
		power *= 10.0;
	}

	int val2;
	int mult=1;
	int sign2=1;
	if (s[i]=='e' || s[i]=='E'){
		i++;

		if (s[i]=='+' || s[i]=='-'){
			sign2= (s[i]=='-')?-1:1;
			i++;
		}

		for (val2 = 0.0; isdigit(s[i]); i++)
			val2=10.0 * val2 + (s[i]-'0');

		int k=0;
		for (;k<val2;k++)
			mult*=10;
	}

	return (sign2==-1)? sign * val/power / mult: sign*val/power * mult;

}

int main(void){
	
	char * s = "123.45e-3";

	printf("double: %f\n",atof(s));

	return 0;
}
