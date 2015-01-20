#include<iostream>

using namespace std;

//Exercise 15-18: Create a class that has a data member and a
//derived class that adds another data member. Write a non-member
//function that takes an object of the base class by value and
//prints out the size of that object using sizeof. In main()
//create an objet of the derived class, print out its size, and
//then call your function. Explain what happens.

//Answer: Object should be sliced. Their size should be different;

class Base { 
public:
	int a;
};

class Derived : public Base {
public:
	int b;
};

void sizeme(Base b){
	cout<<"object size: "<<sizeof(b)<<endl;
}

int main(void){
	
	Base b;
	Derived d;

	sizeme(b);
	sizeme(d);

	return 0;
}
