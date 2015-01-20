#include<iostream>

using namespace std;

//Exercise 15-6: Create an inheritance hierarchy of
//Rodent, Mouse, Gerbil, Hamster, etc. In the base
//class, provide methods that are common to all
//Rodents, and redefine these in teh derived classes to
//perform different behaviors depending on the specific
//type of Rodent. Create an array of pointers to
//Rodent, fill it with different specific types of
//Rodents, and call your base-class methods to see what
//happens.

class Rodent {
public:
	void eat(){
		cout<<"Rodent::eat()"<<endl;
	}
	~Rodent(){
		cout<<"~Rodent() destructor"<<endl;
	};
};

class Mouse : public Rodent {
public:
	void eat(){
		cout<<"Mouse::eat()"<<endl;
	}
	~Mouse(){
		cout<<"~Mouse() destructor"<<endl;
	}

};

class Gerbil : public Rodent {
public:
	void eat(){
		cout<<"Gerbil::eat()"<<endl;
	}
	~Gerbil(){
		cout<<"~Gerbil() destructor"<<endl;
	}

};

class Hamster : public Rodent {
public:
	void eat(){
		cout<<"Hamster::eat()"<<endl;
	}
	~Hamster(){
		cout<<"~Hamster() destructor"<<endl;
	}

};

int main(void){
	
	Rodent * rodent[]={new Mouse, new Gerbil, new Hamster};
	for (unsigned i=0; i<sizeof(rodent)/sizeof(rodent[0]); i++)
		rodent[i]->eat();


	delete rodent[1];
	return 0;
}
