#include <stdio.h>
#include <stdlib.h> 
#include "calc.h"
#define MAXOP 100
#define NUMBER  '0'

//Exercise 4-4. Add the commands to print the top elements of the stack without
//popping, to duplicate it, and to swap the top two elements. Add a command to
//clear the stack.
//
//List of commands:
//
//# - print top most elem w/o popping i.e. peek()
//@ - duplicate topmost element and push it
//$ - swap top two elements
//~ - clear the stack !
//
//Notes: for newlines, i have changed it so that it now peeks


int getop(char []);
void push(double);
double pop(void);

int main(void)
{
	int type;
	double op2;
	char s[MAXOP];
	while ((type = getop(s)) != EOF) {
		//printf("OP: %c\n",type);
		switch (type) {
			case NUMBER:
				printf("pushing %f\n",atof(s));
				push(atof(s));
				break;
			case '~':
				printf("clearing the stack\n");
				clear();
				break;
			case '$':
				printf("swapping top two: ");
				op2 = pop();
				double op3 = pop();
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
