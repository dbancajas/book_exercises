#include<stdio.h>

//for (i=0;i<lim-1 && (c=getchar()) != '\n' && c !=EOF; ++i)
//	s[i]=c;
//
//Question 2-2: Write a loop equivalent to the for loop above without using && or ||

int main(){
	int i;	
	int lim=50;
	char s[50];
	char c;

	for (i=0; (c=getchar()) != '\n'; ++i){
		if (i >= lim-1)		
			break;
		else if (c==EOF)
			break;	
		else 	
			s[i]=c;
	}
	printf("string: %s\n",s);

	return 0;
}
