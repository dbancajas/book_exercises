#include<stdio.h>

//Exercise 5-5. Write versions of the library functions strncpy , strncat , and
//strncmp, which operate on at most the first n characters of their argument
//strings. For example, strncpy(s,t,n) copies at most n characters of t to s .
//Full descriptions are in Appendix B.
//

char * strncpy(char *s, const char *t, size_t n){
	size_t i=0;

	for (;i<n && *(t+i); i++)
		*(s+i) = *(t+i);

	if (i<n) {//t has fewer than n chars, pad it with '\0'
		while(i < n){
			*(s+i) = '\0';
			i++;
		}
	}
	return s;

}


char * strncat2(char *s,const char *t, int n){
	char * s2 = s;
	int i=0;

	while(*s++);
	s--;//point s to '\0'

	while((*s++=*t++) && i++ < n);

	*s='\0';


	return s2;
}


int strncmp2(const char *s, const char *t, int n){
	int i=0;

	for(;*s++==*t++ && i < n;i++);

	//printf("comparing: %c and %c\n",*(s-1),*(t-1));

	s--;
	t--;

	return (i==n)?0:(*s-*t);

}


int main(void){
	char s[20]="dean";
	char t[20]="michael";

	
	char s2[20]="dean";
	char t2[20]="michael";

	char s3[20]="deanazz";
	char t3[20]="deannmc";

	strncpy(s,t,6);
	strncat2(s2,t2,5);

	int x = strncmp2(s3,t3,5);
	

	printf("%s\n",s);
	printf("%s\n",s2);
	printf("%d\n",x);

	//i just wanted to see how the values of a char are initialized
	int i;

	for(i=0; i<20; i++)
		printf("%d ",s[i]);
	puts("");
	

	return 0;
}
