#include<iostream>
#include "CppLib.h"

//Exercise 4-7: Make a stash that holds doubles. Fill it with 25 double values,
//then print them out to the console.

using namespace std;

int main(void){

	Stash st;

	st.initialize(sizeof(double));

	double * x;
	for (int i=0; i < 25; i++){
		x = new double(i + 1.2);
		cout<<"pushed index:"<<st.add(x)<<endl;
	}

	cout<<"Count: "<<st.count()<<endl;

	for (int i=0; i<25; i++){
		cout<<"element "<<i<<": "<<*((double *)st.fetch(i))<<endl;
	}



	return 0;
}

