#include<iostream>
#include<vector>

using namespace std;

//Exercise 15-7: Modify Ex 6 so that you use a vector<Rodent *> instead of an array of pointers. Make sure that memory is cleaned up properly.

//eat() is not a virtual func
//destructor should be virtual to have proper cleanup.

class Rodent {
public:
	void eat(){
		cout<<"Rodent::eat()"<<endl;
	}
	virtual ~Rodent(){
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
	

	vector<Rodent *> rodent;
	rodent.push_back(new Hamster);
	rodent.push_back(new Mouse);
	rodent.push_back(new Gerbil);

	for (unsigned i=0; i < rodent.size(); i++){
		rodent[i]->eat();
	}
	
	for (unsigned i=0; i < rodent.size(); i++){
		delete rodent[i];
	}

	return 0;
}
