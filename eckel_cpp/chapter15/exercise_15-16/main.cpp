#include<iostream>

using namespace std;

//Exercise 15-16: Modify VirtualsInDestructors.cpp by inheriting
//a class from Derived and overriding f() and the destructor. In
//main() create and upcast an object of your new type, then
//delete it.

class Base {
public:
	virtual ~Base() {
		cout<<"Base1()\n";
		f();
	}

	virtual void f() { 
		cout <<"Base::f()\n"; 
	}
};

class Derived : public Base {
public:
	~Derived() { cout << "~Derived()"<<endl;}
	void f() { cout << "Derived::f()\n"; }
};

class Dean: public Derived {
public: 
	~Dean() { cout <<"~Dean()"<<endl; }
	void f() { cout << "Dean::f()"<<endl; }
};

int main(void){
	Base *b = new Dean;
	delete b;
	
	return 0;
}
