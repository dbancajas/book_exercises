#include<iostream>

using namespace std;

//Exercise 4-4: Create struct with a single int data member, and two global
//functions, each of which takes a pointer to that struct. The first function
//has a second int argument and sets the struct's int to the argument value,
//the second displays the int from the struct. Test the functions.

struct thestruct {
	int mem;
};

void setmem(thestruct * ts, int val){
	ts->mem = val;
}

void accessmem(thestruct * ts){

	cout<<"mem value of struct: "<<ts->mem<<endl;

}

int main(void){
	
	thestruct * t = new thestruct;

	setmem(t, 5);
	accessmem(t);
	

	return 0;
}
