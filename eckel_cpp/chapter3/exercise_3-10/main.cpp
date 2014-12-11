#include<iostream>

using namespace std;

//Exercise 3-10: Try to compile and linke FileStatic.cpp with FileStatic2.cpp.
//What does the resulting error message mean?

//Answer: error is "undefined reference to fs. The var fs is not available
//outside where it is declared as static.

static int fs;

int main(void){
	fs = 1;
	

	return 0;
}
