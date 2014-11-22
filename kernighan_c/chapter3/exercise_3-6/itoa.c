#include<stdio.h>

//Exercise 3-6: Write a version of itoa that accepts three arguments instead of
//two. The third argument is a minimum field width; the converted number must
//be padded with blanks on the left if necessary to make it wide enough;


void reverse(char s[]){
	char temp;

	char * end=s;
	
	while (*end++!='\0');//find the NULL character

	end--;//point it to the char before the \0
	end--;

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

void itoa(int n, char s[],int pad){
	int i, sign;

	if ((sign=n)<0)
		n=-n;
	i=0;

	do{
		s[i++]= n % 10 +'0';
	}while( (n/=10) >0 );

	if (sign < 0)
		s[i++]='-';

	while(i<pad)
		s[i++]=' ';
		

	s[i]='\0';
	printf("%s\n",s);
	reverse(s);
}


int main(void){

	int a = -1234567890;
	//int a = 47483648;
	char s[100];
	int pad=10;

	itoa(a,s,pad);

	printf("string of %d is %s\n",a,s);

	return 0;
}
