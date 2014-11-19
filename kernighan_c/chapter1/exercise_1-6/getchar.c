#include<stdio.h>

//Question 1-6: Verify that the expression getchar() != EOF is 0 or 1.
	
int main(){

	char c;

	while( c = (getchar() != EOF) ){
		printf("value of c:%d\n ", c);
	}
		printf("loop quit: value of c:%d\n ", c);

	return 0;
}
