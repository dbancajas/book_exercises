#include<iostream>
#include<cassert>

//Exercise 4-17: Dynamically create pieces of storage of the following types, using new: int, long an array of 100 chars, an array of 100 floats. Print the addresses of these and then free the storage using delete.
//

using namespace std;

int main(void){

	int * ip = new int;
	long * lp = new long;
	float * f = new float;
	unsigned char *  cp = new unsigned char[100];
	char *  cp2 = new char;
	float * fp = new float[100];

	int * ip2 = new int[10];

	assert(cp!=NULL);
	assert(cp2!=NULL);
	assert(fp!=NULL);

	cout<<"ip: "<<hex<<ip<<endl;
	cout<<"lp: "<<hex<<lp<<endl;
	cout<<"cp2:"<<hex<<cp2<<endl;
	cout<<"f:"<<hex<<f<<endl;

	for (int i=0; i<100; i++)
		//cout<<"cp["<<dec<<i<<"]: "<<hex<<cp[i]<<endl;
		cout<<hex<<&cp[i]<<endl;
	//cout<<"cp: "<<hex<<cp<<endl;
	//cout<<"fp: "<<hex<<fp<<endl;

	for (int i=0; i<10; i++)
		cout<<hex<<&ip2[i]<<endl;
	return 0;
}

