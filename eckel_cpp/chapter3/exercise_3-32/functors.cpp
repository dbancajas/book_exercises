#include<iostream>

using namespace std;

//Exercise 3-32: Define a function that takes a double argument and returns an
//int. Create and initialize a pointer to this function, and call the function
//through your pointer. 

int func(double a){
	cout << "func is called!" << endl;
	return static_cast<int> (a);
}

int main(void){
	
	int (*functor)(double) ;
	functor = func;

	double x=10.0;

	cout<<functor(x)<<endl;

	return 0;
}
