#include<iostream>

using namespace std;

//Exercise 15-3: Expanding on Exercise 2, createa function that takes a Shape object by vale and try to upcast a derived object in as an argument. See what happens. Fix the function by taking a reference to the shape object.

class Shape{
	public:

	Shape(){  }
	virtual void draw()=0;
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
//if this is not a reference, it will complain that Shape is an abstract class
void upc(Shape& s){
	s.draw();
}

int main(void){

	Shape * s[] = {new Circle, new Square, new Triangle};

	for (unsigned i=0; i<sizeof(s)/sizeof(s[0]); i++)
		s[i]->draw();
	
	upc(*s[1]);

	return 0;
}
