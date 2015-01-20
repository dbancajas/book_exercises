#include<iostream>

using namespace std;

//Exercise 15-4:  modify combined.cpp in Chapter 14 so
//that f() is virtual in the base class. Change main()
//to perform an upcast and a virtual call.

class A {
	int i;

public:
	A(int ii): i(ii){}
	~A() {}

	void f() const {
		cout<<"A::f() -> "<<i<<endl;
	}

};

class B {
	int i;
public:
	B(int ii) : i(ii) {}
	~B(){}
	virtual void f() const{
		cout<<"B::f() -> "<<i<<endl;
	};

};

class C : public B{
	A a;
public:
	C(int ii) : B(ii), a(ii){}
	~C() {}
	void f() const {
		cout<<"C::f()"<<endl;
		a.f();
		B::f();
	}
};

int main(void){
	C c(47);

	c.f();

	cout<<"Upcast"<<endl;
	B *b = new C(48);
	b->f();

	

	return 0;
}
