#include<iostream>

#include<string>

//Exercise 1-4: What about this one? What if we change }} to };} in the third line from the end?


//Answer: Yes. It is valid. Because we just have an equivalent empty statement right before the ;
using namespace std;

int main(){

	{const string s = "a string";
	 cout<<s<<endl;
	 { 
		 const string s = "another string";
		 cout<<s<<endl;
	 }
	}
	return 0;

}
