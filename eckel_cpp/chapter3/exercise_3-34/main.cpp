#include<iostream>

using namespace std;

//Exercise 3-34: Modify the FunctionTable.cpp so that each function returns a
//string (instead of printing out a message) and so that this value is printed
//inside of main().


//a macro to define dummy functions.

#define DF(A) string A() {\
       	return (#A  " is called\n") ; }

DF(a);
DF(b);
DF(c);
DF(d);

typedef string (*functor)(void);

int main(void){
	functor fptr[4] = { a, b, c, d };
	functor single;

	char in;
	cout<<"enter character from a to d"<<endl;
	cin>>in;

	
	single = fptr[in-'a'];

	cout<<"calling using functor here"<<endl;

	cout<<single()<<endl;

	return 0;
}
