#include<stdio.h>

//Question 2-4: Write an alternate version of squeeze(s1,s2) that deletes each
//character in s1 that matches any character in the string s2.

int exists(char s[], char c);
void squeeze(char s1[], char s2[]){
	int i,j;

	for(i=0,j=0; s1[i] != '\0'; ++i){
		if(!exists(s2,s1[i]))
			s1[j++]=s1[i];
	}
	s1[j]='\0';

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
	char b[100]="abcde";

	squeeze(a,b);
	printf("%s\n",a);

}
