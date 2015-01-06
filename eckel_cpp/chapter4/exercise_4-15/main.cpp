#include<iostream>

//Exercise 4-15: Write a program that prints out all the sizes for the fundamental data types on your computer using sizeof.

using namespace std;


int main(void){
	
	cout<<"int: "<<sizeof(int)<<endl;
	cout<<"unsigned: "<<sizeof(unsigned)<<endl;
	cout<<"short: "<<sizeof(short)<<endl;
	cout<<"long: "<<sizeof(long)<<endl;
	cout<<"double: "<<sizeof(double)<<endl;
	cout<<"float: "<<sizeof(float)<<endl;
	cout<<"char: "<<sizeof(char)<<endl;

}
