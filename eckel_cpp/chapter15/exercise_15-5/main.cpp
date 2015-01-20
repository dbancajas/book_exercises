#include<iostream>

using namespace std;

//Exercise 15-3: modify instrument3.cpp by adding a virtual prepar() function. Call prepar() inside tune().

enum note { middleC, Csharp, Cflat };

class Instrument {
public:
	virtual void play(note) const {
		cout << "instrument::play"<<endl;
	}

	virtual void prepare() const {
		cout<<"Instrument::prepare"<<endl;
	}

};

class Wind : public Instrument {
public:
	void play(note) const {
		cout<<"Wind::play"<<endl;
	}
	virtual void prepare() const {
		cout<<"Wind::prepare"<<endl;
	}
};


void tune (Instrument &i){
	i.prepare();
	i.play(middleC);

}




int main(void){
	Wind w;
	tune(w);
	

	return 0;
}
