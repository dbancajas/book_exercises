#include<iostream>
#include<string>

using namespace std;

//Exercise 15-14: In Adding virtuals.cpp make all the member
//functions of Pet pure virtuals, but provide a definition for
//name(). Fix Dog as necessary, usign the base-class definition
//of name().

class Pet {
	string pname;
public:

	Pet (const string& petName):pname(petName){}

	virtual string name() const=0;
	virtual string speak() const=0;

};

string Pet::name() const {
	return pname;
}

string Pet::speak() const {
	return "";
}

class Dog : public Pet {
	//string xname;
	string pname;

public:
	Dog (const string& petName): Pet(petName){}

	string name() const {
		return Pet::name();
	}

	virtual string sit() const {
		return Pet::name() + " sits";
	}

	string speak() const {
		return Pet::name() + " says 'Bark!'";
	}
};

int main(void){
	
	Pet * p[] = {new Dog("generic"), new Dog("bob")};

	cout<<"p[0] speak()="<<p[0]->speak()<<endl;

	cout<<"p[1] speak()="<<p[1]->speak()<<endl;

	return 0;
}
