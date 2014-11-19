#include<stdio.h>


//Question: Write a program to count blanks, tabs, and newlines.

int main (void){
	
	int blank,tabs,newl;
	blank=0;
	tabs=0;
	newl=0;

	int c;

	while ((c=getchar()) != EOF){
		if (c == ' ')
			++blank;
		else if (c == '\t')
			++tabs;
		else if (c == '\n')
			++newl;
	}

	printf("blanks: %d, tabs: %d, newline: %d\n", blank,tabs,newl);
}
