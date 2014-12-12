#include<iostream>

using namespace std;

//Exercise 3-16: Experiment with Union.cpp by removing various union elements
//to see the effects on teh size of the resulting union. Try assigning to one
//element (thus one type) of the union and printing out via a different element
//(thus a different type) to see what happens.

typedef union Packed {
	int i;
	char a;
} Packed;

//Answer: Union packs the variable. Smaller sized data types are packed towards
//the beginning of the memory space.

int main(void){
	Packed x;
	x.i=0x6500;
	//x.d = 1.0;
	//x.i = (~0>>1);

	cout << "size of x:" << sizeof(x) << endl;
	cout << "x.i:" << x.i << endl;
	x.a='E'; //this will change to '69', the lowest byte of i
	cout << "x.i:" << x.i << endl;
	cout << "x.a:" << x.a << endl;
	//cout << "x.d:" << x.d << endl;

	

	return 0;
}
