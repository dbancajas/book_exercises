#include<stdio.h>

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
