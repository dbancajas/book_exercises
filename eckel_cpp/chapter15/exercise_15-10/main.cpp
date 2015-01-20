#include<iostream>
#include<vector>

using namespace std;

//Exercise 15-10: Starting with the previous Rodent hierarcy,
//modify Rodent so that it is a purely abstract class.

class Rodent {
public:
	virtual void eat()=0;

	virtual ~Rodent(){
		cout<<"~Rodent()destructor"<<endl;
	}
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

class BlueHamster : public Hamster {
public:
	void eat(){
		cout<<"BlueHamster::eat()"<<endl;
	}
	~BlueHamster(){
		cout<<"~BlueHamster() destructor"<<endl;
	}
};

int main(void){
	

	vector<Rodent *> rodent;
	rodent.push_back(new Hamster);
	rodent.push_back(new Mouse);
	rodent.push_back(new Gerbil);
	rodent.push_back(new BlueHamster);

	for (unsigned i=0; i < rodent.size(); i++){
		rodent[i]->eat();
	}
	
	for (unsigned i=0; i < rodent.size(); i++){
		delete rodent[i];
	}

	return 0;
}
