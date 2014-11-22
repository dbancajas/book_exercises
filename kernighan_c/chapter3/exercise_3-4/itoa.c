#include<stdio.h>

//Exercise 3-4: In a two's complement number representation, our version of
//itoa does not handle the largest negative number, that is, the value of n
//equal to -(2^(wordsize-1)). Explain why not. Modify it to print that value
//correctly, regardless of the machine on which it runs.


//Answer: It's because the range of n-bit integer is -2^(n-1) to 2(n-1)-1. So
//there is no representation when you multiply the lowest possible value by -1.
//To put it shortly, the range is asymmetric.
//
//To solve this: we convert -2^(n-1) to -2^(n-1)-1 first, which has a representation in the + range.
//Then we manually add 1 to the least significant bit.
//THE SOLUTION is in itoa2.

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

void itoa(int n, char s[]){
	int i, sign;

	if ((sign=n)<0)
		n=-n;
	i=0;

	do{
		s[i++]= n % 10 +'0';
	}while( (n/=10) >0 );

	if (sign < 0)
		s[i++]='-';

	s[i]='\0';
	printf("%s\n",s);
	reverse(s);
}

void itoa2(int n, char s[]){
	int i, sign;
	int temp=n;

	if (n==(0x1<<(sizeof(n)*8-1)))
		n++;

	if ((sign=n)<0)
		n=-n;
	i=0;



	do{
		s[i++]= n % 10 +'0';
		if(i==1 && temp == (0x1<<(sizeof(n)*8-1)))
			s[i-1]++;

	}while( (n/=10) >0 );

	if (sign < 0)
		s[i++]='-';

	s[i]='\0';
	printf("%s\n",s);
	reverse(s);
}

int main(void){

	int a = -2147483648;
	//int a = 47483648;
	char s[100];

	itoa2(a,s);

	printf("string of %d is %s\n",a,s);

	return 0;
}
