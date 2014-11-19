#include<stdio.h>

//Question 1-20: Write a program detab that replaces tabs in the input with the
//proper number of blanks to space to the next tab stop. Assume a fixed set of
//tab stops, say every n columns. Should n be a variable or a symbolic
//parameter?

//This is wrong for now. I understood the question differently

int getl(char s[], int lim);
#define MAXLEN 500
#define TABL 2
void detab(char s[]);
void moveby4(char beg[], char m[]);

//it is assumed that there is enough space to accomodate all characters

int main(void) {
	int len;
	char s[MAXLEN];

	while ((len=getl(s,MAXLEN))>0){
		printf("string: %s",s);
		detab(s);
		printf("detabbed: %s", s);
	}

	return 0;
}


int getl(char s[], int lim){

	int i,c;
	
	for(i=0; i < lim - 2 && (c=getchar())!=EOF; ++i){
		s[i]=c;
	}
	
	s[i]='\0';
	
	return i;

}

void detab(char s[]){
	int i=0;

	while (s[i] != '\0'){
		if (s[i]=='\t')
			moveby4(s,s+i);
		i++;
	}
}

void moveby4(char beg[], char m[]){
	
	char * end = m;
	int i=0;

	while(*end != '\0')
		end++;
	
	if (beg + MAXLEN - TABL > end){ //means that there is space left in the char array
		while( m < end )	{
			*(end + TABL - 1) = *end;
			end--;
		}
		for (i=0; i < TABL; i++)
			m[i]=' ';
	}
}
