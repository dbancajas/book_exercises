#include<iostream>

using namespace std;

//Exercise 6-6: Create a class that redundantly performs data member selection
//and a member function call using the this keyword.

struct thestruct{
	int mem;

	void accessmem();
	void callme(){}
};

void thestruct::accessmem(){
	cout<<"mem value:"<<this->mem<<endl;
	this->callme();
}

int main(void){
	
	thestruct x;
	x.mem = 3;
	x.accessmem();

	return 0;
}
