#include<iostream>

using namespace std;

//Exercise 3-31: Modify StringizingExpressions.cpp so that P(A) is
//conditionally #ifdefed to allow the debugging code to be automaticlaly
//stripped out by setting a command-line flag. You will need to consult your
//compiler's documentation to see how to define and undefine preprocessor
//values.


int main(void){
	
#ifdef DEBUG
	cout<<"success!! print this"<<endl;

#endif
	cout<<"I am only printing this"<<endl;

	return 0;
}
