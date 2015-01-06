
//Exercise 4-13: Create an abstract data type that represents a videotap in a
//video rental store. Try to consider all the data and oeprations that may be
//necessary for the Video type to work will within the video rental management
//system. Include a print() member function that displays information about the
//Video.

#include<iostream>
#include<string>

#include "Video.h"

using namespace std;

void Video::print(){
		cout<<"id: "<<id<<endl
		    <<"genre: "<<genre<<endl
		    <<"length: "<<length<<endl<<endl;
}

