#include <stdio.h>
#define MAXLINE 1000 /* Maximum input line size */
#define THRESHOLD 80

//Question 1-17: Write a program to print all input lines that are longer than 80 characters.

int getline2( char s[], int lim );
void copy( char to[], char from[] );

int main(void){
	int len;
	int max;
	char line[MAXLINE];
	char longest[MAXLINE];

	max=0;
	while ((len = getline2(line,MAXLINE)) >0)
		if (len > THRESHOLD){
			printf("length is > 80 chars: %s", line);
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
	int i=0;
	
	//for (i=0; from[i]!='\0';++i)
	while((to[i]=from[i]) != '\0')
		++i;
}
