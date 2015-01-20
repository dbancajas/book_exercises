#include<iostream>
#include<vector>

using namespace std;

//Exercise 15-11: Create an air-traffic control system with base-class Aircraft and various derived types. Create a Tower class with a vector<Aircraft *> that sends the appropriate messages to the  various aircraft under its control.

class Aircraft {
protected:
	string name;

public:
	Aircraft(string n):name(n){}

	virtual void receive(string msg)=0;

	virtual ~Aircraft(){
		cout<<"~Aircraft Destructor"<<endl;
	}

};

class boeing737: public Aircraft {

public:
	boeing737():Aircraft("Boeing 737"){}

	void receive(string msg){
		cout<<"Boeing 737 Message Received:"<<msg<<endl;
	}

	~boeing737(){
		cout<<"~Boeing destructor"<<endl;
	}

};

class airbusa320: public Aircraft {

public:
	airbusa320():Aircraft("Airbus A320"){}

	~airbusa320(){
		cout<<"~Airbus A320 destructor"<<endl;
	}

	void receive(string msg){
		cout<<"Airbus A320 Message Received:"<<msg<<endl;
	}
};
	

class Tower {

	vector<Aircraft *> inflight;

public:
	Tower(){
		inflight.push_back(new airbusa320);
		inflight.push_back(new boeing737);
	}


	void sendToAll(string msg){
		for (unsigned i=0; i < inflight.size(); i++){
			inflight[i]->receive(msg);
		}

	}


	~Tower(){
		for (unsigned i=0; i < inflight.size(); i++){
			delete inflight[i];
		}
	}


};

int main(void){
	Tower *t = new Tower;
	t->sendToAll("Test Message only");

	delete t;
	

	return 0;
}
