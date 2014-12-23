#include<iostream>
#include "Stack.h"

//Exercise 4-8: Repeat Exercise 7 with Stacks.

using namespace std;

int main(void){

	Stack stack;

	double* x;
	for (int i=0; i<25; i++){
		x = new double(i+1.20);
		stack.push(x);
	}

	//stack.cleanup();

	for (int i=0; i<25; i++){
		double * x = (double *) stack.pop();
		cout<<i<<": "<<*x<<endl;
	}




	return 0;

}
