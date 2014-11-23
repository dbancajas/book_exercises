#include<stdio.h>

int strrindex(char s[], char t[]){
	int i,j;
	int pos=-1; //stores the rightmost position

	for (i=0; s[i]!='\0'; ++i){
		for (j=0; (s[i+j] == t[j]) && t[j]!='\0'; ++j);
		
		if ( t[j]=='\0')
			pos=i;
	}
		
	
	return pos;
}

int main(){

	char * s = "fox the quick brown fox jumps over the fox";
	//char * s = "r the fox";
	char * t = "fox";

	printf("rightmost position: %d\n",strrindex(s,t));

	return 0;
}
