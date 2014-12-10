#include<iostream>

using namespace std;

//Exercise 3-5: Write a program that evaluates the two expressions in the
//Section "precedence" that is in this chapter.

int main(void){

	int x=1,y=2,z=3;	

	cout<<"A= X + Y - 2/2 + Z --> "<<x+y-2/2+z<<endl;
	cout<<"A= X + (Y - 2)/(2 + Z) --> "<<x+(y-2)/(2+z)<<endl;

	return 0;
}
