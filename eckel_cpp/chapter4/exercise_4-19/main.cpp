#include<iostream>

//Exercise 4-19: Show an example of a structure declared within
//another structure (a nested structure). Declare data members in both
//structs, and declare and define member functions in both structs.
//Write a main() that tests your new types.

using namespace std;


struct A{
	struct B{
		int var;

		void print();
	};

	B the_b;
	int var;
	void print();
};

void A::B::print(){
	cout<<"this is B"<<endl;
}
void A::print(){
	cout<<"this is A"<<endl;
}

int main(void){

	A AA;
	A::B BB;


	AA.print();
	BB.print();

	AA.var = 0;
	BB.var = 1;

	AA.the_b.print();
	AA.the_b.var = 2;

	cout<<AA.var<<BB.var<<endl;
	cout<<AA.var<<" "<<BB.var<<" "<<AA.the_b.var<<endl;

}
