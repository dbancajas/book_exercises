#include<iostream>

//Exercise 4-20: How big is a structure? Write a pice of code that
//prints the size of variosu structures. Create structures that have
//data members only and ones that have data members and function
//members. Then create a structure that no members at all. Print out
//the sizes of all these. Explain the reason for the result of the
//structure with no data members at all.

using namespace std;

struct a{
	int aa;

	void print(int a){
		cout<<"printing some stuff"<<endl;
	}
};

struct b{
	int bb;
};

struct ccccc{
};

//Answer: it has to have 1-byte because a 0-sized data type makes it
//difficult to implement pointer arithmetic (i.e. an array with
//0-sized elements will lead to all objects having the same address?).
//So the C++ compiler adds a dummy byte for empty classes/structs.
//This is part of the C++ standard.

int main(void){
	cout<<"a:"<<sizeof(struct a)<<endl;
	cout<<"b:"<<sizeof(struct b)<<endl;
	cout<<"c:"<<sizeof(struct ccccc)<<endl;

	return 0;
}
