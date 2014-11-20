#include<stdio.h>

//Question 1-20: Write a program detab that replaces tabs in the input with the
//proper number of blanks to space to the next tab stop. Assume a fixed set of
//tab stops, say every n columns. Should n be a variable or a symbolic
//parameter?

//I have two solutions for this: 
// shortersolution() is the one based on the book. It doesn't store the output into any data structure.
// detab() is an in-place solution that is more complex.


int getl(char s[], int lim);

#define MAXLEN 500
#define TABL 2
#define TABINC 8

void detab(char s[]);
void moveby(char beg[], char m[], int add);

//it is assumed that there is enough space to accomodate all characters

int main(void) {
	int len;
	char s[MAXLEN];

	while ((len=getl(s,MAXLEN))>0){
		printf("012345678012345678");
		printf("s:\n%s\n",s);
		shortersolution(s,MAXLEN);
		detab(s);
		printf("d:\n%s\n", s);
	}

	return 0;
}

int shortersolution(char s[], int lim){
	int i,j;
	int pos=0;

	printf("shorter solution:\n");	

	for(i=0; i < lim && s[i]!='\0'; i++){
		if(s[i]=='\t'){
			int nb = TABINC - (pos % (TABINC-1));
			for (j=0;j<nb;j++)
				putchar('Z');	
		}
		else{
			if (s[i]=='\n')
				pos=0;	
			putchar(s[i]);
			pos++;
		}
	}
}

int getl(char s[], int lim){

	int i,c;
	
	for(i=0; i < lim - 2 && (c=getchar())!=EOF; ++i){
		s[i]=c;
	}
	
	s[i]='\0';
	
	return i;

}

//this is an inplace solution, so it is more complex

void detab(char s[]){
	int i=0;
	short int cnt=0;
	int add;

	while (s[i] != '\0'){
		add=TABINC - (i % (TABINC-1));
		if (s[i]=='\t')
			moveby(s,s+i,add);
		i++;
	}
}

void moveby(char beg[], char m[], int add){
	
	char * end = m;
	int i=0;

	while(*end != '\0')
		end++;
	
	if (beg + MAXLEN - TABL > end){ //means that there is space left in the char array
		while( m < end )	{
			*(end + add - 1) = *end;
			end--;
		}
		for (i=0; i < add; i++)
			m[i]='X';
	}
}
