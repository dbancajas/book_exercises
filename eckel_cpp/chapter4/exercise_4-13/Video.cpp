
//Exercise 4-13: Create an abstract data type that represents a videotap in a
//video rental store. Try to consider all the data and oeprations that may be
//necessary for the Video type to work will within the video rental management
//system. Include a print() member function that displays information about the
//Video.

#include<iostream>
#include<string>

using namespace std;

struct Video {

	string name;
	unsigned id;
	unsigned genre; //genre of movie
	unsigned length; //movie runtime in hours

	void print(){
		cout<<"name: "<<name<<endl
		    <<"id: "<<id<<endl
		    <<"genre: "<<genre<<endl
		    <<"length: "<<length<<endl;
	}

};
	
