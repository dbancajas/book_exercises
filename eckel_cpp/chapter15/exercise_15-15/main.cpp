#include<iostream>

using namespace std;

//Exercise 15-15: Write a small program to show the difference
//between calling a virtual function inside a normal member
//function and calling a virtual function inside a constructor.
//The program should prove that the two calls produce different
//results.


class Pet {

public:
	Pet(){
		hello();
	};

	virtual void hello(){
		cout<<"Pet::hello"<<endl;
	}

	void hookup(){
		hello();
	}
};

class Dog : public Pet {

	void hello() {
		cout<<"Dog::hello"<<endl;
	}
};

int main(void){
	Pet *p = new Dog;

	cout<<"late bind:"<<endl;
	p->hookup();
	

	return 0;
}
