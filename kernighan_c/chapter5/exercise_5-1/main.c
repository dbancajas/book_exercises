#include <stdio.h>
#include <stdlib.h> 
#include "calc.h"
#define MAXOP 100
#define NUMBER  '0'
#include <ctype.h>
#define SIZE 5



int getop(char []);
void push(double);
double pop(void);

/* getint: get next integer from input into *pn */
int getint(int *pn)
{

	int c, sign;
	while (isspace(c = getch()))
		/* skip white space */
		;
	if (!isdigit(c) && c != EOF && c != '+' && c != '-') {
		ungetch(c); /* it is not a number */
		return 0;
	}
	sign = (c == '-') ? -1 : 1;

	if (c == '+' || c == '-'){
		c = getch();

		if (!isdigit(c)){ //not a number
			ungetch(c);
			return 0;
		}

	}
	for (*pn = 0; isdigit(c); c = getch()){
		*pn = 10 * *pn + (c - '0');
	}

	*pn *= sign;
	if (c != EOF)
		ungetch(c);

	return c;

}

int main(void)
{
	int n, array[SIZE], getint(int *);
	int x;
	for (n = 0; n < SIZE && (x=getint(&array[n])) != EOF; n++){
		if (!x)
			n--;

	}

	for (n=0; n< SIZE;n++)
		printf("%d ",array[n]);

	puts("");

	return 0;
}
