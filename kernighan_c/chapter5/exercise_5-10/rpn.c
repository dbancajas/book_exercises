#include<stdio.h>
#include<stdlib.h>


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
	//should be an error here

}

int main(int argc, char *argv[]){

	node *t=NULL;
	node **top = &t;

	while(argc--){
		printf("%s ",*argv++);
	}
	puts("");

	push('c',top);
	push('a',top);
	push('t',top);

	printf("%c\n",pop(top));

	return 0;
}
