#include<iostream>


using namespace std;

//Exercise 2-9: Write a program that asks the user to enter two numbers and
//tells the user which number is larger than the other


int main(void){

	int x,y;

	cout<<"Enter two numbers: "<<endl;	
	cin>>x>>y;
	
	if (x!=y)
		cout<< ((x>y)?x:y) << " is the larger number"<<endl;
	else 	
		cout<<"both numbers are equal"<<endl;

	cout<<"hellow this is it"<<endl;
	cout<<"second one"<<endl;

	return 0;
}
