#include<iostream>

//Exercise 1-1. Are the following definitions valid? Why or why not?
//const std::string hello = "Hello";
//const std::string message = hello + ", world" + "!";


//Answer: First one is valid, second one is also valid.
//

using namespace std;
int main(void){

	const std::string hello = "Hello";
	const std::string message = hello + ", world" + "!";

	cout<<hello<<endl;
	cout<<message<<endl;

	return 0;

}
