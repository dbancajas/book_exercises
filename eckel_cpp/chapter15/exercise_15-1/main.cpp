#include<iostream>

using namespace std;

//Exercise 15-1: Create a simple "shape" hierarchy: a
//base class called Shapped and derived classes called
//Circle, Square and Triangle. In the base class, make
//a virtual function called draw(), and override this
//in the derived classes. Make an array of pointers to
//Shape objects that you create on the heap (and thus
//perform upcasting of the pointers), and call draw()
//through the base-class pointers, to verify the
//behaviour of the virtual function. If you debugger
//supports it, single-step through the code.

class Shape{
	public:
	virtual void draw(){ }
};

class Circle: public Shape{

	public:
	void draw(){
		cout<<"Circle::draw()"<<endl;
	}
};

class Square: public Shape{

	public:
	void draw(){
		cout<<"Square::draw()"<<endl;
	}
};

class Triangle: public Shape{

	public:
	void draw(){
		cout<<"Triangle::draw()"<<endl;
	}
};

int main(void){

	Shape * s[] = {new Circle, new Square, new Triangle};

	for (unsigned i=0; i<sizeof(s)/sizeof(s[0]); i++)
		s[i]->draw();
	

	return 0;
}
