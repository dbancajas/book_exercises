<<<<<<< HEAD
#include "calc.h"
#include <stdio.h>
#include <ctype.h>

#define MAXVAL 100
int sp = 0;

double val[MAXVAL];
/* maximum depth of val stack */
/* next free stack position */
/* value stack */
/* push: push f onto value stack */
void push(double f)
{
	if (sp < MAXVAL)
		val[sp++] = f;
	else
		printf("error: stack full, can't push %g\n", f);
}
/* pop: pop and return top value from stack */
double pop(void)
{
	if (sp > 0)
		return val[--sp];
	else {
=======
#include<stdio.h>
#include "calc.h"

#define MAXVAL 100

int sp=0;
double val[MAXVAL];

/* push: push f onto value stack */

void push(double f){
	if (sp<MAXVAL)
		val[sp++]=f;
	else
		printf("error: stack full, can't push %f\n",f);
}


/* pop: pop and return top value from stack */
double pop(void){
	if(sp>0)
		return val[--sp];
	else{
>>>>>>> ffb3c51af0a4896898bcdb50a07e9ba8b554065d
		printf("error: stack empty\n");
		return 0.0;
	}
}
