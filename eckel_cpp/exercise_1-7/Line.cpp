#include<string>
#include<iostream>
#include<fstream>
#include<vector>

using namespace std;

int main(){
	vector<string> v;
	ifstream in("Line.cpp");
	string line;
	string dummy;
	string acc="";
	int x=0;
	
	while(getline(in,line)){
		getline(cin,dummy);
		cout<<line<<endl;
	}

	in.close();

	return 0;

}

