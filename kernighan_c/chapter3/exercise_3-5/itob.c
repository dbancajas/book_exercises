#include<stdio.h>

//Exercise 3-4: Write the function itob(ns,b) that converts the integer n into
//a base b character representation in the string s. In partucular,
//itob(n,s,16) formats n as a hexadecimal integer in s.



void reverse(char s[]){
	char temp;

	char * end=s;
	
	while (*end++!='\0');//find the NULL character

	end--;//point it to the char before the \0
	end--;//point it to the char before the \0

	printf("end-s = %lu\n",(end-s)/sizeof(char));
	printf("end pointer value = %p\n",end);


	while(s < end){
		temp = *s;
		*s = *end;
		*end = temp;
		s++;
		end--;
	}

}

void itoa(int n, char s[],int b){
	int i, sign;

	if ((sign=n)<0)
		n=-n;
	i=0;

	do{
		s[i++]= n % b +'0';
	}while( (n/=b) >0 );

	if (sign < 0)
		s[i++]='-';

	s[i]='\0';
	printf("%s\n",s);
	reverse(s);
}

int main(void){

	int a = 32;
	//int a = 47483648;
	char s[100];
	int b=8;

	itoa(a,s,b);

	printf("string of %d is %s in base %d\n",a,s,b);

	return 0;
}
