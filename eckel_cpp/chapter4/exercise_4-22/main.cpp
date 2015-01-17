#include<iostream>
#include "CppLib.h"
#include "Stack.h"
#include <string>

//Exercise 4-22: Create a Stack that holds Stashes. Each
//Stash will hold five lines from an input file. Create the
//Stashes using new. Read a file into your Stack, then
//reprint it in its original form by extracting it from the
//Stack.

using namespace std;
int main(void){
	Stack stack;
	string s(' ',10);
	
	
	for (int i=0; i < 3; i++){
		Stash * s = new Stash;
		s->initialize(sizeof(s));

		for (int j=0; j < 5; j++){
			string *x = new string(' ',10);
			cin>>*x;
			s->add(x);
		}
		stack.push(s);
	}

	for (int i=0; i < 3; i++){
		Stash * stash = (Stash *) stack.pop();
		for (int j=0; j < 5; j++){
			string *str = (string *) stash->fetch(j);
			cout<<*str<<endl;
		}

	}

	return 0;
}
