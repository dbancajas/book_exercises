#include<iostream>

//Exercise 2-8: WRite a program to generate the product of the numbers in the range [1,10).
//

using namespace std;

int main(void){
	int i=1;
	int prod;

	for (prod=1;i<10;i++)
		prod*=i;

	cout<<"product of 1-9: "<<prod<<endl;

	return 0;
}
