#include<iostream>

using namespace std;

//Exercise 3-24: Define a float variable. Take its
//address, cast that address to an unsigned char,
//and assign it to an unsigned char pointer. Using
//this pointer and [], index into the float variable
//and use the printBinary() function defined in this
//chapter to print out a map of the float (go from 0
//to sizeof(float)). Change the value of the float
//and see if you can figure out what's going on (the
//float contains encoded data).

void printBinary(const unsigned char val) {
	for(int i = 7; i >= 0; i--)
		if(val & (1 << i))
			std::cout << "1";
		else
			std::cout << "0";
}


int main(void){
	float a = -128.25;
	unsigned char * x;
	x = (unsigned char *) &a;

	for (int i = sizeof(float)-1; i >= 0; i--){
		printBinary(x[i]);
	}
	cout<<endl;
	

	return 0;
}
