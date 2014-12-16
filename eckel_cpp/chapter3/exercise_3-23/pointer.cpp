#include<iostream>

using namespace std;

//Exercise 3-23: Modify PointerArithmetic.cpp to work with long and long
//double.

#define P(EX) cout << #EX << ": " << EX << endl;

int main(void){
	long int a[10];

	for(int i = 0; i < 10; i++)
		a[i] = i;//Give it index values

	long int *ip = a;

	P(*ip);
	P(*++ip);
	P(*(ip+5));
	long int *ip2 = ip + 5;
	P(*ip2);
	P(*(ip2 - 4));
	P(*--ip2);
	P(ip2-ip);

	

	return 0;
}
