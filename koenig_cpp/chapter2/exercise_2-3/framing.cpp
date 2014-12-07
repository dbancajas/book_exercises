#include<iostream>
#include<string.h>
using namespace std;

//Exercise 2-3: Rewrite the framing program to ask the user to supply the
//amount of spacing to leave between the frame and the greeting.
//


int main(void){
	
	//ask the person's name
	cout<<"Please enter your first name: ";

	string name;

	cin>>name;

	cout<<"please enter spacing:"<<endl;

	int space;
	cin>>space;

	//build the message that we intent to write
	const string greeting = "Hello, " + name + "!";

	// the number of blanks surrounding the greeting
	const int pad = space;
	const int pad_vertical = space;

	//the numbers of rows and columns to write
	const int rows = pad_vertical * 2 + 3;
	const string::size_type cols=greeting.size() + pad * 2 + 2;

	//write a blank line to separate the output from the input
	cout<<endl;

	for (int r=0;r!=rows;++r){
		string::size_type c=0;

		while(c!=cols){
		
			//is it time to write the greeting
			if( r == (pad_vertical+1) && c == (pad+1)){
				cout<<greeting;
				c+=greeting.size();
			}
			else {
				//are we on the border
				if ((r==0)||(r==rows-1)||(c==0)||(c==cols-1))
					cout<<"*";
				else 
					cout<<" ";
				c++;
			}
		}
		cout<<endl;
	}

	return 0;
}
