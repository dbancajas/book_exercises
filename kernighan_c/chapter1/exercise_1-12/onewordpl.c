#include<stdio.h>
#include<stdlib.h>

//Question 1-12: Write a program that prints its input one word per line

int main(void) {

 	int c,prev='x';
	
	while ((c=getchar()) != EOF){
		if (c == ' ' && prev != ' ')
			putchar ('\n');
		else if (c != ' ')
			putchar(c);	

		prev=c;
	}
}
