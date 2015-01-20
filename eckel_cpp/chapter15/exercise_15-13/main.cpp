#include<iostream>
#include<string>


using namespace std;

//Exercise 15-13: 


class Pet {
public:
	virtual string speak()const=0;// const { return ""; }
	virtual ~Pet()=0;
};

Pet::~Pet () {
}

class Dog : public Pet {
public:
	string speak() const { 
		//cout<<Pet::speak()<<endl;;
		return "Bark!"; }

};

int main(void){
	
	Dog ralph;
	Pet* p1 = &ralph;
	Pet& p2 = ralph;

	cout<< "p1->speak() = " << p1->speak() << endl;
	cout<< "p2.speak() = " << p2.speak() << endl;


	return 0;
}
