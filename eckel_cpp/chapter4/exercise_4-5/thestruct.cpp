#include<iostream>

using namespace std;

//Exercise 4-5: Repeat Exercise 4 but move the functions so they are member
//functions of the struct, and test again.

struct thestruct {
	int mem;
	void setmem(int val);
	void accessmem();
};

void thestruct::setmem(int val){
	mem = val;
}

void thestruct::accessmem(){

	cout<<"mem value of struct: "<<mem<<endl;

}

int main(void){
	
	thestruct * t = new thestruct;

	
	t->setmem(5);
	t->accessmem();

	return 0;
}
