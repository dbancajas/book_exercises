#include<iostream>
#include<fstream>

using namespace std;

int main(void){

	std::ifstream inp("textfile");

	string str;
	int count=0;

	while(inp>>str) 
		count++;

	cout<<"Number of words: "<<count<<endl;


	inp.close();

	return 0;
}
