#include<iostream>

using namespace std;

//Exercise 3-11: Modify Boolean.cpp so that it works with double values instead
//of ints.

int main(void){
	double i,j;

	cout<<"Enter a double:";
	cin>>i;
	cout<<"Enter another double:";
	cin>>j;
	cout<<" i > j is "<< (i>j)<<endl;
	cout<<" i < j is "<< (i<j)<<endl;
	cout<<" i >= j is "<< (i>=j)<<endl;
	cout<<" i <= j is "<< (i<=j)<<endl;
	cout<<" i == j is "<< (i==j)<<endl;
	cout<<" i != j is "<< (i!=j)<<endl;
	cout<<" i && j is "<< (i&&j)<<endl;
	cout<<" i || j is "<< (i||j)<<endl;
	cout<<" (i<10) && (j<10) "<< ((i<10) && (j<10)) <<endl;

	

	return 0;
}
