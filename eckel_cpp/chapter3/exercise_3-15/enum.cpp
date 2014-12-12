#include<iostream>

using namespace std;

//Exercise 3-15: Create a program that uses an enumeration of colors. Create a
//variable of this enum type and print out all the numbers that correspond with
//the color using a for loop.

enum COLOR { red=10, orange=15, yellow, blue, gray, invalid };

int main(void){
	COLOR x;

	for (int i=0; i< invalid; i++){
		x = (COLOR) i;

		switch(x) {
			case red:
				cout << "red = " << x << endl;
				break;
			case orange:
				cout << "orange = " << x << endl;
				break;
			case blue:
				cout << "blue = " << x << endl;
				break;
			case gray:
				cout << "gray = " << x << endl;
				break;
			case yellow:
				cout << "yellow = " << x << endl;
				break;
			default:
				cout << "invalid color" << endl;
				break;
		}
	}
	

	
}
