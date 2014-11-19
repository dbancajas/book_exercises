#include<stdio.h>

//Question 1-2: Experiment to find out what happens when printf's argument
//string contains \c, where c is some character not listed above.

int main(void){
	
	printf("trying unknown escape sequence: \z \n");

	return 0;
}


//Answer is: 
//exer2.c: In function ‘main’:
//exer2.c:6:9: warning: unknown escape sequence: '\z' [enabled by default]

//Description: program will still compile but will print z

