#include<iostream>

using namespace std;

//Exercise 15-17: Take exercise 16 and add calls to f() in each destructor. Explain what happens.
//

//Answer: the destructors are called from in-going-outside.
//Meaning from the most derived class first and to the base
//class. Hence, the derived classes are already destroyed by the
//time a base class is called so calls to virtual functions
//inside a virtual destructor are locally bound.

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
	~Derived() { 
		cout << "~Derived()"<<endl;
		f();
	}

	void f() { cout << "Derived::f()\n"; }
};

class Dean: public Derived {
public: 
	~Dean() { 
		cout <<"~Dean()"<<endl;
		f(); 
	}
	void f() { cout << "Dean::f()"<<endl; }
};

int main(void){
	Base *b = new Dean;
	delete b;
	
	return 0;
}
