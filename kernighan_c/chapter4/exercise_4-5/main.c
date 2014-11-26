#include <stdio.h>
#include <stdlib.h> 
#include "calc.h"
#include <math.h>
#define MAXOP 100


//Exercise 4-5: Add access to library functions like sin, exp, and pow . See math.h

int getop(char []);
void push(double);
double pop(void);

int main(void)
{
	int type;
	double op2,op3;
	char s[MAXOP];
	while ((type = getop(s)) != EOF) {
		//printf("OP: %c\n",type);
		switch (type) {
			case ERROR:
				printf("ERROR!! Uknown command from math.h??");
				return -1;
			case NUMBER:
				printf("pushing %f\n",atof(s));
				push(atof(s));
				break;
			case SIN:
				printf("sine of %f\n",sin((peek())));
				push(sin(pop()));
				break;
			case EXP:
				printf("exp(%f) is %f\n",peek(), exp((peek())));
				push(exp(pop()));
				break;
			case POW:
				op2=pop();
				op3=pop();
				printf("%f ^ %f = %f\n",op2,op3,pow(op2,op3));
				push(pow(op2,op3));
				break;
			case '~':
				printf("clearing the stack\n");
				clear();
				break;
			case '$':
				printf("swapping top two: ");
				op2 = pop();
				op3 = pop();
				printf("%f %f\n",op2,op3);
				push(op2);
				push(op3);
				break;
			case '@':
				printf("duplicating topmost: %f\n",peek());
				push(peek());
				break;
			case '#':
				printf("peeking: %f\n",peek());
				break;
			case '+':
				push(pop() + pop());
				printf("pushed sum:\n ");

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
				printf("top: %.8g\n", peek());
				//printf("\t%.8g\n", pop());
				break;
			default:
				printf("error: unknown command %s\n", s);
				break;
		}
	}
	return 0;
}
