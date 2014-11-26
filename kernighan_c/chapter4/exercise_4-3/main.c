#include <stdio.h>
#include <stdlib.h> 
#include "calc.h"
#define MAXOP 100
#define NUMBER  '0'

//Exercise 4-3. Given the basic framework, it's straightforward to extend the
//calculator. Add the modulus (%) operator and provisions for negative numbers.
//


int getop(char []);
void push(double);
double pop(void);

int main(void)
{
	int type;
	double op2;
	char s[MAXOP];
	while ((type = getop(s)) != EOF) {
		switch (type) {
			case NUMBER:
				printf("pushing %f\n",atof(s));
				push(atof(s));
				break;
			case '+':
				push(pop() + pop());
				break;
			case '*':
				push(pop() * pop());
				break;
			case '-':
				op2 = pop();
				printf("op2 = %f\n",op2);
				push(pop() - op2);
				break;
			case '%':
				op2 = pop();
				push((double)((int)pop() % (int)op2));
				break;
			case '/':
				op2 = pop();
				if (op2 != 0.0)
					push(pop() / op2);
				else
					printf("error: zero divisor\n");
				break;
			case '\n':
				printf("\t%.8g\n", pop());
				break;
			default:
				printf("error: unknown command %s\n", s);
				break;
		}
	}
	return 0;
}
