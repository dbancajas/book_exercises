#include<iostream>

using namespace std;

//Exercise 3-7: Create two functions, one that takes a string * and one that
//takes string&. Each of these functions should modify the outside string
//object in its own unique way. In main(), create and initialized a string
//object, print it, then pass it to each of the two fumctions, printing the
//results.

void mod_str1(string * a)
{
	*a = "hello dean\n";
}

void mod_str2(string &a)
{
	a = "bye dean\n";
}

int main(void){
	string x = "dummy contents";
	
	mod_str1(&x);
	cout<<x<<endl;
	mod_str2(x);
	cout<<x<<endl;

	return 0;
}
