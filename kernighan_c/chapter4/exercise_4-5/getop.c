#include "calc.h"
#include <stdio.h>
#include <ctype.h>
#include <string.h>



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

	else if (c == 'S'){
		s[++i]=getch();
		s[++i]=getch();
		s[++i]='\0';

		if (strcmp("SIN",s)==0)
			return SIN;
		else {
			printf("Uknown command: %s, S must only be used for SIN\n",s);
			return ERROR;
		}

	}
	else if (c == 'E'){
		s[++i]=getch();
		s[++i]=getch();
		s[++i]='\0';

		if (strcmp("EXP",s)==0)
			return EXP;
		else {
			printf("Uknown command: %s, E must only be used for EXP\n",s);
			return ERROR;
		}
	}
	else if (c == 'P'){
		s[++i]=getch();
		s[++i]=getch();
		s[++i]='\0';

		if (strcmp("POW",s)==0)
			return POW;
		else {
			printf("Uknown command: %s, P must only be used for POW\n",s);
			return ERROR;
		}


		return POW;
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
