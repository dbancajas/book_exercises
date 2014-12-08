#include<iostream>

using namespace std;

//Exercise 2-5: Write a set of "*" so that they form a square, rectangle and a
//triangle

//Answer: note that square and rectangle are backwards because of the non-monospace nature of vertical and horizontal characters
int main(void){

	//square
	for (int i=0; i<10;i++){
		for (int i=0; i<10;i++)
			cout<<"*";
		cout<<endl;
	}
	cout<<endl;

	//rectangle
	for (int i=0; i<5;i++){
		for (int j=0; j<10;j++)
			cout<<"*";
		cout<<endl;
	}

	cout<<endl;

	//triangle
	for (int i=0; i<5;i++){
		for (int j=0; j<i;j++)
			cout<<"*";
		cout<<endl;
	}

	return 0;
}
