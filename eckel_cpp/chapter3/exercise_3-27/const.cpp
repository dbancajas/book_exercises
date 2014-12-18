#include<iostream>

using namespace std;

//Exercise 3-27: Create a const array of double and a volatile array of
//double. Index through each array and use const_cast to cast each
//element to non-const and non-valatile, respectively, and assign a
//value to each element.

int main(void){
	const double a[10]={0,1,2,3,4,5,6,7,8,9};
	volatile double b[10]={0,1,2,3,4,5,6,7,8,9};
	
	for (int i=0; i<10; i++){
		double &x = const_cast<double &>(a[i]);
		x = x*3;
		double &y = const_cast<double &>(b[i]);
		y = y * 5;
	}


	for (int i=0; i<10; i++)
		cout<<a[i]<<" ";
	cout<<endl;

	for (int i=0; i<10; i++)
		cout<<b[i]<<" ";
	cout<<endl;

	return 0;
}
