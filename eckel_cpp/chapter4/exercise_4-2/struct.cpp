#include<iostream>

using namespace std;

//Exercise 4-2: Create a struct declaration with a single member function, then
//create a definition for that member function. Create an object of your new
//data type and call the member function.

struct mystruct{ 
	void helloworld();
};

void 
mystruct::helloworld(){

	cout<<"hello world"<<endl;
}

int main(void){
	
	mystruct ms;
	ms.helloworld();

	return 0;
}
