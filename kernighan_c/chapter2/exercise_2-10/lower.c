#include<stdio.h>

//Exercise 2-10: Rewrite teh function lower, which converts upper case letters
//to lower case, with a conditional expression intead of if-else

int main(){

	char c='I';

	char l = (c >='A' && c <='Z')? c-('A'-'a'): c;

	printf("%c\n",l);
	

	return 0;

}
