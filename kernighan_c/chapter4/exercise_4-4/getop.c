#include "calc.h"
#include <stdio.h>
#include <ctype.h>



int getch(void);
void ungetch(int);

/* getop: get next character or numeric operand */
int getop(char s[])
{
	int i, c;
	while ((s[0] = c = getch()) == ' ' || c == '\t')//skip whitespaces
		;
	s[1] = '\0';

	i = 0;

	if (c=='-'){
		i++;
		char d;
		//printf("could be a -\n");
		d = getch();
		//printf("next digit:%c\n",d);
		ungetch(d);

		if (!isdigit(d)){ //if char after - is not a digit, return c
			//printf("not a digit\n");
			return c;
		}
		else { //if it's a digit. get it again and put it in string array
			c=getch();
			s[i]=c;
		}
	}

	//printf("eval 1, c is %c\n",c);

	// the char c here is assumed to be pushed already	
	
	if (!isdigit(c) && c != '.')// && c != '-')
		return c;
	/* not a number */

	//printf("eval 2\n");

	if (isdigit(c)){
		/* collect integer part */
		while (isdigit(s[++i] = c = getch()));
	}
	if (c == '.'){
		/* collect fraction part */
		while (isdigit(s[++i] = c = getch()));
	}

	s[i] = '\0';
	
	//printf("s is %s\n",s);

	if (c != EOF)
		ungetch(c);

	return NUMBER;
}
