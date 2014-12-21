#include<stdio.h>
#include<stdlib.h>
#include<ctype.h>


//Exercise 5-10: Write a program that will evaluate an
//reverse polish notation expression on the command
//line.
//

//Answer: this only works for single char operands for now due to the way I made the stack.
//

typedef struct _node {
	char a;
	struct _node * next;
} node;
//the node above is used as our stack


void push(char a, node **top){
	node *x = (node *) malloc(sizeof(node));

	if (x!=NULL){
		node *tmp = *top;
		x->next = tmp;
		x->a=a;
		*top=x;
	}
	else {
		printf("push: ERROR in MALLOC\n");
	}

}

char pop(node **top){

	if (*top){
		node *tmp=(*top)->next;
		char t=(*top)->a;
		free(*top);
		*top = tmp;
		return t;
	}
	else {
		printf("pop: ERROR\n");
	}
	//should be an error here

}

int isoperator(char a){
	if (a == '+' || a == '-' || a == '/' || a == '*')
		return 1;
	else 
		return 0;
}

int main(int argc, char *argv[]){

	node *t=NULL;
	node **top = &t;

	int i=0;
	int j=0;
	char z='0';

	for (;j<10;j++){
		printf("%c:%d\n",z,z);
		z++;
	}
	while(argc--){
		printf("%s\n",*(argv+i));
		char x = *(argv+i)[0];
		printf("char: %c\n",x);

		if (isalnum(x)){
			push(x,top);
		}
		else if (isoperator(x)){
			char b = pop(top);
			char c = pop(top);
			unsigned d = b-'0';
			unsigned e = c-'0';

			printf("\noperators: %c %c\n",b,c);
			if(x=='+'){
				printf("sum: %d\n",d+e);
				push((d+e)+'0',top);
			}

		}

		i++;
	}

	puts("");

	push('c',top);
	push('a',top);
	push('t',top);

	printf("%c\n",pop(top));

	return 0;
}
