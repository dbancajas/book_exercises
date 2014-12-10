#include<iostream>

using namespace std;

//Exercise 3-4: Modify Menu.cpp to use switch statements instead of if statements.

int main(void){
	char c;//To hold response

	while(true){
		cout<<"MAIN MENU:"<<endl;
		cout<<"l:left,r:right, q:quit ->";
		cin >>c;

		if(c=='q')
			break;//Out of "while (1)"

		switch(c){
			case 'l':
				cout<<"LEFT MENU:"<<endl;
				cout<<"select a or b: ";
				cin>>c;
				switch(c){
					case 'a':
						cout<<"you chose 'a'"<<endl;
						continue;//Back to main menu
					case 'b':
						cout<<"you chose 'b'"<<endl;
						continue;//Back to main menu
					default:
						cout<<"you didn't choose a or b"<<endl;
						continue;
				}
			case 'r':
				cout<<"LEFT MENU:"<<endl;
				cout<<"select c or d: ";
				cin>>c;
				switch(c){
					case 'c':
						cout<<"you chose 'c'"<<endl;
						continue;//Back to main menu
					case 'd':
						cout<<"you chose 'd'"<<endl;
						continue;//Back to main menu
					default:
						cout<<"you didn't choose c or d"<<endl;
						continue;
				}
			default:
				cout<<"You must choose 'l' or 'r'"<<endl;
				break;


		}
	}
	cout<<"Quitting menu..."<<endl;
	

	return 0;
}
