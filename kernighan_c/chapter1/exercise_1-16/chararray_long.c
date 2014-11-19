#include <stdio.h>
#define MAXLINE 10 /* Maximum input line size */

//Question 1-16: Revise the main routine of the longest-line program so it will
//correctly print the length of arbitrarily long input lines, and as much as
//possible of the text.

// to extend this i think we can do some stuff:
// 1. Just print out the character as it is being typed..
// 2. use a bigger array?

//Description: This code accurately captures long lines. However, there is a
//bit of a catch, the code introduces a new line after the limit is reached.
//The answer in the answer key doesn't actually solve this problem too. I think
//it only deals with the accurate reporting of the # of chars


int getline2( char s[], int lim );
void copy( char to[], char from[] );

int main(void){
	int len;
	int max;
	char line[MAXLINE];
	char longest[MAXLINE];

	max=0;
	while ((len = getline2(line,MAXLINE)) >0)
		if (len > max){
			max=len;
			copy(longest,line);
			//printf("longest: %s", longest);
	}
	
	if (max > 0)
		printf("the longest with limited buffer array: %s", longest);
	
	printf("length: %d\n",max);
	return 0;
}

int getline2( char s[], int lim ){

	int c,i,l=0;
	char exceeded=0;

	for (i=0; (c=getchar()) != EOF && c!='\n'; ++i){
		if (i < lim - 1)//just copy
			s[l++]=c;

		if (i == (lim - 2)){ //reached the limit, terminate the string
			s[lim-2]='\n';
			//printf ("long string: %s", s);
		}
		if (i == (lim - 1)){
			s[lim-1]='\0';
		}

		if (i > (lim - 1) && !exceeded){
			exceeded = 1;
			printf("\b\b %s",s);
		}

		if (i>lim-1)
			putchar(c);
		
	}

	if (c=='\n' && l <= lim-2){
		s[l]=c;
		++l;
		s[l]='\0';
	}

	

	return i;

}

void copy(char to[], char from[]){
	int i=0;
	
	//for (i=0; from[i]!='\0';++i)
	while((to[i]=from[i]) != '\0')
		++i;
}
