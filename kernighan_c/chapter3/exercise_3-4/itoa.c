#include<stdio.h>


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


int main(void){

	int a = 987654;
	char s[100];

	itoa(a,s);

	printf("string of %d is %s\n",a,s);

	return 0;
}
