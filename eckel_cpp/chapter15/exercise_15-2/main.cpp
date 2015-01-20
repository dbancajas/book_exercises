#include<iostream>

using namespace std;

//Exercise 15-2: Modify the previous exercise so that draw is a pure virtual function.

class Shape{
	public:

	Shape(){ draw(); }
	virtual void draw()=0;
};

void
Shape::draw(){
}
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
	

	Shape r;

	return 0;
}
