#include <stdio.h>
#define MAXLINE 1000 /* Maximum input line size */
#define THRESHOLD 80

//Question 1-18: Write a program to remove trailing blanks and tabs from each
//line of input, and to delete entirely blank lines.

int getline2( char s[], int lim );
void copy( char to[], char from[] );

int main(void){
	int len;
	int max;
	char line[MAXLINE];
	char longest[MAXLINE];

	max=0;
	while ((len = getline2(line,MAXLINE)) >0){
		copy(longest,line);
		printf("line: %s",longest);
	}
	
	return 0;
}

int getline2( char s[], int lim ){

	int c,i;

	for (i=0; i < lim-1 && (c=getchar()) != EOF && c!='\n'; ++i)
		s[i]=c;

	if (c=='\n'){
		s[i]=c;
		++i;
	}

	s[i]='\0';
	return i;
}

void copy(char to[], char from[]){
	int i=0,j=0;
	int prev;	
	int lastchar=0;

	char hastb=0;

	while(from[i++]!='\0');

	i--;

	hastb = (from[i] == ' ');//hastb -> stores condition if there is trailing blanks
	

	//this condition determines what should be the position of the last character	
	if(hastb){
		for(; i>=0; i--){
			if(from[i] !=' ')
				break;
		}
		lastchar = i;
	}
	else {
		lastchar = i;
	}

	i=0;	
	while(from[i]!='\0'){
		if (from[i]!= '\t' && i <= lastchar)
			to[j++]=from[i];
		i++;
	}
	to[j]='\0';
}
