#include<iostream>
#include<cstdlib>

using namespace std;

//Exercise 3-20: Create two new programs starting from argstoints.cpp so they
//use atol() and atof(), respectively


int main(int argc, char * argv[]){

	for(int i = 1; i < argc; i++){
		cout<< atof(argv[i])<<endl;
	}
	

	return 0;
}
