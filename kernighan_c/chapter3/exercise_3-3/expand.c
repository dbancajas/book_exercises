#include<stdio.h>


//Exerice 3-3: Write a function expand(s1,s2) that expands shorthand notations
//like a-z in the string s1 into the equivalent complete list abc...xyz in s2.
//Allow for letters of either case and digits, and be prepared to handle cases
//like a-b-c and a-z0-9 and -a-z. Arrange that a lead or trailing - is taken
//literally.
//
void expand(char s1[],char s2[]){
	char *b = s1;

	while(*s1!='\0'){
		printf("char: %c\n",*s1);
		if(*s1 != '-'){
			*s2++=*s1++;
		}
		else {//it's a -

			//begin and end chars are inclusive values
			char begin;
			char end;
		
			//begin character
			if( s1 == b ){

				if (*(s1+1) >= 'A' &&  *(s1+1) <= 'Z')
					begin='A';
				else if (*(s1+1) >= 'a' && *(s1+1) <= 'z')
					begin='a';
				else if (*(s1+1) >= '0' && *(s1+1) <= '9')
					begin='0';
				else {
					begin='!';
					printf("ERROR BEGIN!\n");
				}
			}
			else {
				begin = *(s1-1) + 1;
			}


		
			//end character
			if ( *(s1+1) == '\0' ){

				if (*(s1-1) >= 'A' &&  *(s1-1) <= 'Z')
					end='Z';
				else if (*(s1-1) >= 'a' && *(s1-1) <= 'z')
					end='z';
				else if (*(s1-1) >= '0' && *(s1-1) <= '9')
					end='9';
				else {
					end='!';
					printf("ERROR END!\n");
				}
			}
			else {
				end = *(s1+1)-1;
			}

			char x;
			for(x=begin; x <= end;x++)
				*s2++=x;

			s1++;
		}
	}
	*s2='\0';
}
	
int main(void){

	char source[100] = "-f-";
	char dest[100]="";

	expand(source,dest);
	printf("orig:%s \nnew:%s\n",source,dest);
	char * s1 ="-u";
	expand(s1,dest);
	printf("orig:%s \nnew:%s\n",s1,dest);
	char * s2 ="c-";
	expand(s2,dest);
	printf("orig:%s \nnew:%s\n",s2,dest);
	char * s3 ="A-Za-z1-8-9";
	expand(s3,dest);
	printf("orig:%s \nnew:%s\n",s3,dest);

	char * s4 ="-a-z-";
	expand(s4,dest);
	printf("orig:%s \nnew:%s\n",s4,dest);

	return 0;
}
