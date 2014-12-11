#include<iostream>

using namespace std;

//Exercise 3-13: Modify Ifthen.cpp to use the ternary operator.

int main(void){
	int i;
	cout << "type a number and 'Enter'" << endl;
	cin >> i;
	
	string str = (i > 5)? "It's greater than 5": ((i < 5)?"It's less than 5":"It's equal to 5");
	cout << str << endl;

	cout << "type a number and 'Enter'" << endl;
	cin >> i;

	
	str = (i < 10)?((i > 5)?"5 < i < 10":"i <= 5"):"i >= 10";
	cout << str << endl;


	return 0;
}
