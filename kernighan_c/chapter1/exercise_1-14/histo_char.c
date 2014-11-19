#include<stdio.h>
#include<ctype.h>

//Question 1-14: Write a program to print a histogram of the frequencies of
//different characters in its input.

int main(void){

	char c;
	short int histo[63], labels[63];
	//0-25: upper case A-Z
	//26-51: lower case  a-z
	//52-61: digits
	//62: other characters

	//initialize labels;
	int i=0;

	for (i=0; i < 26; i++){
		labels[i]='A'+i;
	}

	for (i=0; i < 26; i++){
		labels[i+26]='a'+i;
	}
	
	for (i=0; i < 10; i++){
		labels[i+52]='0'+i;
	}

	labels[62]='+';
	for(i=0;i<63;++i){
		histo[i]=0;		
	}

	while( (c=getchar())!=EOF ){
		if (isalpha(c) && isupper(c))
			histo[c-'A']++;
		else if (isalpha(c) && islower(c))
			histo[c-'a'+26]++;
		else if (isdigit(c))
			histo[c-'0'+52]++;
		else
			histo[62]++;
	}

	for(i=0;i<63;++i){
		printf("%c:%d\n", labels[i],histo[i]);
	}

}
