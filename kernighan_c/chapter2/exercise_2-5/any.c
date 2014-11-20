#include<stdio.h>

//Question 2-5: Write the function any(s1,s2) which returns the first location
//in the string s1 where any character from the string s2 occurs, or -1 if s1
//contains no characters from s2. The tandard library function strpbrk does the
//same job but returns a pointer to the location.

int exists(char s[], char c);

int any(char s1[], char s2[]){
	int i,j;

	for(i=0,j=0; s1[i] != '\0'; ++i){
		if(exists(s2,s1[i]))
			return i;
	}
	return -1;
}

int exists(char s[], char c){
	int i;
	
	for(i=0; s[i]!='\0';++i){
		if(s[i]==c)
			return 1;

	}
	return 0;
}

int main(void){

	char a[100]="abcdefghi";
	char b[100]="xyze";

	printf("location in s1 where any character of s2 occurs:%i\n",any(a,b));

}
