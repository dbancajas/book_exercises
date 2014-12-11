#include<iostream>

using namespace std;

//Exercise 3-9: Compile and run Static.cpp. Remove the static keyword from the
//code, acompile and run it again, and explain what happens.

//Answer: w/o static keyword, the func() should start printing at i=1;
//

void func(){
	int i=0;
	cout<<"i = "<< ++i <<endl;
}

int main(void){
	for(int x=0; x < 10; x++)
		func();
	

	return 0;
}
