#include<iostream>

using namespace std;

//Exercise 3-26: Define an array of int.  Take the starting address of that
//array and use static_cast to convert it into a void *, a number indication a
//number of bytes, and a value to initialize each by as arguments. The function
//should set each by in the specificied range to the specificied value. Try out
//the function on your array of int.

void init (void * p, int num, char val){
	for (int i=0; i < num; i++){
		char * x = static_cast<char *>(p);
		*(x+i)=val;
	}
}


int main(void){
	int a[10];
	void *x;

	for (int i=0; i < 10; i++)
		a[i]=i+20;

	x = static_cast<void *>(&a[0]);

	char c=1;
	
	init(x, 5*sizeof(int), c);
	
	for (int i=0; i < 10; i++)
		cout<<a[i]<<" ";
	cout<<endl;

	return 0;
}
