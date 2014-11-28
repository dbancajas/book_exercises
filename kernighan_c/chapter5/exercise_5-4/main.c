#include<stdio.h>

//Exercise 5-4. Write the function strend(s,t) , which returns 1 if the string
//t occurs at the end of the string s , and zero otherwise.
//

int strend(char *s, char *t){
	char *t2=t;

	while(*s++);//find end of s
	s--;

	while(*t2++);//find end of t2
	t2--;

	while(*t2--==*s-- && t2>=t); //compare t2 and s backwards
	t2++;

	return (t2==t)? 1:0; //see if we have arrived at t

}

int main(void){

	char s[20]="dean michael";
	char t[20]="mihael";

	if (strend(s,t))
		printf("string t is at the end of s\n");
	else 
		printf("string t is NOT at the end of s\n");

	return 0;
}
