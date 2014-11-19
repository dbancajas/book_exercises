#include<stdio.h>


//Question: write a function reverse(s) that reverses the character string s.
//use it to write a program that reverses its input a line at a time.

void reverse (char s[], int len){
	char a,b;
	int i=0;	

	for(; i < len/2; i++){
		a = s[i];
		s[i]=s[len-1-i];
		s[len-1-i]=a;	
	}
	/*while(i<len){
		a=s[i];
		s[i]=s[len];
		s[len]=a;
		i++; 
		len--;
	}*/

}

void getline2(char s[],int len){
	char c;
	int i=0;

	while( (c=getchar())!=EOF && i < len && c != '\n'){
		s[i++]=c;
	}

	if (c=='\n')
		s[i++]='\n';
	s[i]='\0';
}
#define LEN 1000

int main(void){
	
	char s[LEN];
	int len = LEN;	
	int i=0;
	getline2(s,LEN);

	while(s[i++]!='\0');
	i--;
	i--;

	printf("orig: %s\n",s);
	printf("length: %d\n",i);
	reverse(s,i);
	
	printf("%s\n",s);
	return 0;
}
