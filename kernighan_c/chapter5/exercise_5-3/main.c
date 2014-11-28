#include<stdio.h>

//Exercise 5-3. Write a pointer version of the function strcat that we showed
//in Chapter 2: strcat(s,t) copies the string t to the end of s .

void strcat2(char *s, char *t){ //concatenate t at the end of s
	while(*s++); //find the '\0' of s
	s--;//subtract 1 due to post-fix nature of statement above
	while((*s++ = *t++)); 
}

int main(void) {

	char s[40] = "";
	char t[10] = "dean";

	strcat2(s,t);

	printf("%s\n",s);

	return 0;
}
