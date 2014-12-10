#include<iostream>

using namespace std;

//Exercise 3-6: Modify YourPets2.cpp so that it uses various different dataypes
//(char, int, float, double, and their variants). Run the program and create a
//map of the resulting memory layout. If you have access to more than one kind
//of machine, operating system, or compiler, try this experiment with as many
//variations as can manage.


//Thoughts: this exercise allows us to see the memory mapping. The data section
//of the process (i.e. global vars) are mapped near the start while the
//variables in the main() are mapped in the stack.

int dog,cat,bird,fish;
char a,b;
short c,d;
double x,y;
long double z;
float w;

void f(int pet){
	cout<<"pet id number: "<<pet << endl;
}

int main(void){
	int i,j,k;
	int x[2];

	//void (*func)(int a);

	cout<<"f():"<<(long) &f<<endl;
	cout<<"a:"<<(long) &a<<endl;
	cout<<"b:"<<(long) &b<<endl;
	cout<<"c:"<<(long) &c<<endl;
	cout<<"d:"<<(long) &d<<endl;
	cout<<"x:"<<(long) &x<<endl;
	cout<<"y:"<<(long) &y<<endl;
	cout<<"z:"<<(long) &z<<endl;
	cout<<"i:"<<(long) &i<<endl;
	cout<<"j:"<<(long) &j<<endl;
	cout<<"x[0]:"<<(long) &x[0]<<endl;
	cout<<"x[1]:"<<(long) &x[1]<<endl;
	

	return 0;
}
