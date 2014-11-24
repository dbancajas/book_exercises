#include<ctype.h>
#include "calc.h"
#include <stdio.h>

int getch(void);
void ungetch(int);

//extern int NUMBER;

/*getop: get next operator or numeric operand */

int getop (char s[]){
	int i,c;
	while((s[0] = c = getch()) == ' ' || c == '\t');
	
	s[1]='\0';

	if(!isdigit(c) && c != '.')
		return c;	

	i=0;

	if(isdigit(c))
		while (isdigit(s[++i] = c = getch()));

	if (c == '.') /*collect fraction part */
		while (isdigit(s[++i] = c = getch()));

	s[i]='\0';

	if(c!=EOF)
		ungetch(c);

	return NUMBER;

}

