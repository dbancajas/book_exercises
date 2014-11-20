#include<stdio.h>

//Question 2-3: Write the function htoi(s), which converts a string of
//hexadecimal digits (including an optional 0x or 0X) into its equivalent
//integer value. The allowable digits are 0 through9, a through f, and A
//through F.
//
//

int htoi(char s[]);


int main(void){
	char s[10] = "ABCD";
	int val = htoi(s);

	//printf("%d %d %d \n",'a','A','0');

	printf("decimal: %d\n",val);


	return 0;
}

int htoi(char s[]){
	int n=0; int i; 

	for(i=0;(s[i]>='0' && s[i]<='9') || 
	        (s[i]>='a' && s[i]<='f') || 
	        (s[i]>='A' && s[i]<='F') || 
		(s[i]=='x')||(s[i]=='X');++i){

			//printf("here 0:%d\n",i);

		if(s[i]=='0' && i==0){
			//printf("here 1\n");
			continue;
		}
		else if (s[i]=='x' || s[i]=='X'){
			//printf("here 2\n");
			continue;
		}
		else if (s[i]=='\0'){
			//printf("here 3\n");
			break;
		}
		else {
			//printf("here 4\n");
			char subt=0; int x=0;

			if(s[i] >= 'a'){
				subt='a';
				x=10;
			}
			else if(s[i] >= 'A'){
				subt='A';
				x=10;
			}
			else{
				subt='0';
				x=0;
			}

			n = n*16 + ( s[i] - subt + x);
			//printf("n:%d\n",n);

		}


	}
	return n;
}
