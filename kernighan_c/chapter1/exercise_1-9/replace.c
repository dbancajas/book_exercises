#include<stdio.h>

//Questio 1-9: Write a program to copy its input to its output, replacing each
//string of one or more blanks by a single blank.

int main(){
	
	char c;
	char has1blank=0;

	while((c=getchar())!=EOF){
		
		if (c != ' ' ){
			printf("%c",c);
			has1blank=0;
		}
		else if (!has1blank){
			has1blank=1;
			printf("%c",c);
		}
		
		
	}

	return 0;
}
