#include<iostream>
using namespace std;

typedef union {
	char c;
	short s;
	int i;
	long l;
	float f;
	double d;
	long double ld;
} Primitives;


int main() {
	Primitives p[10];
	Primitives *pp = p; //p is the array name, which is also the pointer to the first element.


	cout<<"size of Primitivies: "<<sizeof(Primitives)<<endl;
	cout<<"pp = "<<(long) pp<<endl;
	pp++;
	cout<<"pp = "<<(long) pp<<endl;

	return 0;
}


