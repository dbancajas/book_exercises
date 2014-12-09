#include<string>
#include<iostream>
#include<fstream>
#include<vector>

using namespace std;

int main(){
	vector<string> v;
	ifstream in("Fillvector.cpp");
	string line;
	string acc="";
	
	while(getline(in,line))
		v.push_back(line);//Add the line to the end

	for(int i=0; i<v.size(); i++)
		acc+=v[i]+"\n";

	
	cout<<acc<<endl;

	in.close();
	return 0;

}

