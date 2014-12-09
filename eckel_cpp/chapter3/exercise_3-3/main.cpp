#include<iostream>

using namespace std;

//Exercise 3-3: WRite a program that uses a while loop to read words from
//standard input (cin) into a string. This is an "infinite" while loop, which
//you break out of (and exit the program) using a break statement. For each
//word that is read, evaluate it by first using a sequence of if statemetns to
//"map" an integral value to the word, and then use a switch statement that
//uses that integral value as its selector(this siequence of events is not
//meant to be good programmign style; its just supposed to give you exercise
//with control flow). Inside each case, print something meaningful. You must
//decide what the "interesting" words are and what the meaning is. You must
//also decide what word will signal the end of the program. Test the program
//by redirecting a file into the program's standard input (if you want to save
//typing, this file can be your program's source file).

int main(void){

	string str;

	int value;

	while(cin>>str){
		value=str.length()%5;

		if (str=="return")
			break;

		switch (value) {
			case 0:
				cout<<"foo"<<endl;
				break;
			case 1:
				cout<<"bar"<<endl;
				break;
			case 2:
				cout<<"biz"<<endl;
				break;
			case 3:
				cout<<"vah"<<endl;
				break;
			case 4:
				cout<<"mitz"<<endl;
				break;
			default:
				cout<<"no case for this"<<endl;
				break;
		}
	}
	
	cout<<"loop broken"<<endl;

	return 0;
}
