#include<iostream>
#include<string>
#include<fstream>

using namespace std;

int main(void){

	ifstream ifs("textfile");

	int count=0;
	string str,tofind;


	cout<<"Enter word to find:"<<endl;
	cin>>tofind;

	while(ifs>>str)
		if(str==tofind)
			count++;

	cout<<"word: "<<tofind<<" \ncount: "<<count<<endl;

	ifs.close();

}
