#include<stdio.h>

//Exercise 5-6: Rewrite appropriate programs from earlier chapters and exercises with pointers instead of array indexing. Good possibilities include getline (Chapters 1 and 4), atoi, itoa, (Chapters 2, 3 and 4) reverse (chapter 3) and strindex and getop (chapter 4).

void reverse(char *s){

	char *t = s;
	while(*t++);

	t--;
	t--;

	char c;

	while(s<t){
		c=*t;
		*t--=*s;
		*s++=c;
	}


}

int main(void){

	char p[20]="the quick brown fox";

	reverse(p);

	printf("%s\n",p);



	return 0;
}
