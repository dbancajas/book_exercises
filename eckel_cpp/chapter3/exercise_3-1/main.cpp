
//Exercise 3-1: Create a header file (with an extension of .h). In this file,
//declare a group of functions by varying the argument lists and return values
//from among the following: void, char, int, and float. Now create a .cpp file
//that includes your header file and creates definiotions for all of these
//functions. each definition should simply print out the function name,
//argument list, and return type so you know it's been called. Create a second
//.cpp file that includes your header file and defines int main() containing
//calls to all of your functions. Compile and run your program.


#include<iostream>
#include "funcs.h"

using namespace std;


int main(void){

	function1(0,1);
	function2(0,1);
	function3(0,1,2);

}
