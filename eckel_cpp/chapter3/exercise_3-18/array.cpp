#include<iostream>

using namespace std;

//Exercise 3-18: Modify ArrayAddresses.cpp to work with the data types char,
//long int , float and double.

//Answer: this demonstrates pointer arithmetic. The address is incremented
//based on the data type of the array

int main(void){
	char a[10];
	double b[10];
	cout<<"sizeof(char) = "<<sizeof(char) << endl;
	cout<<"sizeof(double) = "<<sizeof(double) << endl;

	for(int i=0; i < 10; i++)
		cout<<"&a["<<i<<"] = "<< (long)&a[i]<<endl;

	cout<<"double==="<<endl;
	for(int i=0; i < 10; i++)
		cout<<"&b["<<i<<"] = "<< (long)&b[i]<<endl;
	

	return 0;
}
