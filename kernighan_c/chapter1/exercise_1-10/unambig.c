#include<stdio.h>

//Question 1-10: Write a program to copy its input to its output, replacing
//each tab by \t, each backspace by \b, and each backslash by \\. This makes
//tabs and backspaces visible in an unambigous way

int main(){

	char c;

	while( (c=getchar())!=EOF ) {
		if(c == '\t')
			printf("\\t");
		else if (c == '\b')
			printf("\\b");
		else if (c == '\\')
			printf("\\\\");
		else 
			printf("%c",c);
	}

	return 0;
}

//Description: I am a little bit confused as to how you can show the \\b?

