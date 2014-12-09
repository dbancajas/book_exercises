#include<iostream>

using namespace std;

//Exercise 2-10: Explain each of the uses of std:: in the following program:
//
//Answer: std:: is used to give a context as to the namespace of the statement

int main(void){
	int k=0;
	int n=10;

	while(k!=n){
		using std::cout;
		cout<<"*";
		++k;
	}

	std::cout<<std::endl;


	return 0;
}
