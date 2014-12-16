#include<iostream>

using namespace std;

//Exercise 3-20: Create an array of string objects and assign a string to each
//element. Print out the array using a for loop.

int main(void){
	string str[5] = { "the","quick","brown","fox","jumps" };

	for (int i=0; i<5; i++){
		cout<<str[i]<<endl;
	}
	

	return 0;
}
