#include<stdio.h>

//Exercise 3-2: Write a function escape(s,t) that converts characters like
//newline and tab into visible escape sequences like \n and \t as it  copies
//the string t to s. Use a switch. Write a function for teh other direction as
//well, converting escape sequences into the real characters.

void escape(char s[],char t[]){

	while(*t!='\0'){
		switch(*t) {
			case '\t':
				*s++='\\';
				*s++='t';
				t++;
				break;
			case '\n':
				*s++='\\';
				*s++='n';
				t++;
				break;
			default:
				*s++=*t++;
				break;
		}
	}

	*s++='\n';
	*s='\0';

}



	

int main(){

	char s[100];
	char t[100]="the\t\t\n quick brown";

	escape(s,t);
	printf("s:%s\n",s);

	return 0;
}
