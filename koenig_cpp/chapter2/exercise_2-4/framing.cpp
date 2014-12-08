#include<iostream>
#include<string.h>
using namespace std;


//Exercise 2-4: The framing program writes the mostly blank lines that separate
//the borders from the greating once character at a time. Change the program so
//that it writes all the spaces needed in a single output expression.

int main(void){
	
	//ask the person's name
	cout<<"Please enter your first name: ";

	string name;

	cin>>name;

	//build the message that we intent to write
	const string greeting = "Hello, " + name + "!";

	// the number of blanks surrounding the greeting
	const int pad = 2;
	const int pad_vertical = 2;

	//the numbers of rows and columns to write
	const int rows = pad_vertical * 2 + 3;
	const string::size_type cols=greeting.size() + pad * 2 + 2;

	//write a blank line to separate the output from the input
	cout<<endl;

	string space_empty(cols-2,'x');
	string space_notemptyrow((cols-2-greeting.size())/2,'x');
	//cout<<"space empty:"<<space_empty<<endl;
	//cout<<"space not empty:"<<space_notemptyrow<<endl;

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
				if ((r==0)||(r==rows-1)||(c==0)||(c==cols-1)){
					cout<<"*";
					c++;
				}
				else {
					//cout<<" ";
					string t =(r == (pad_vertical+1))?space_notemptyrow:space_empty;
					cout<<t;

					c+=t.size();
				}
			}
		}
		cout<<endl;
	}

	return 0;
}
