<<<<<<< HEAD
#include <stdio.h>

#define BUFSIZE 100
char buf[BUFSIZE];
int bufp = 0;
/* buffer for ungetch */
/* next free position in buf */
int getch(void) /* get a (possibly pushed-back) character */
{
	return (bufp > 0) ? buf[--bufp] : getchar();
}
void ungetch(int c)
	/* push character back on input */
	{
	if (bufp >= BUFSIZE)
		printf("ungetch: too many characters\n");
	else
		buf[bufp++] = c;
=======
#include<stdio.h>
#define BUFSIZE 100

char buf[BUFSIZE];
int bufp = 0;

int getch (void) /* get a (possibly pushed back) character */
{
	return (bufp>0)?buf[--bufp]:getchar();
}

void ungetch (int c) /*push character back on input */
{
	if (bufp >= BUFSIZE)
		printf("ungetch: too many characters\n");
	else
		buf[bufp++]=c;
>>>>>>> ffb3c51af0a4896898bcdb50a07e9ba8b554065d
}
