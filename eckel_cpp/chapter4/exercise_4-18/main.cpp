#include<iostream>
#include<stdio.h>
#include<string.h>

//Exercise 4-18: Write a function that takes a char * argument. Using
//new, dynamically allcoate an array of char that is the size of the
//char array that's passed to the function. Using array indexing, copy
//the characters from the argument to the dynamically allocated array
//(don't forget the null terminator) and return the pointer to the
//copy. In your main() test the function by passing a static quoted
//character array, then take the result of that and pass it back into
//the function. Print both strings and both pointers so you can see
//they are different storage. using delete, clean up all the dynamic
//storage.

using namespace std;


char * copy(char * ptr, unsigned sz){

	char * a = new char[sz];

	for(unsigned i=0; i<sz; i++){
		a[i]=ptr[i];
	}

	return a;
}

int main(void){

	char * x = "dean michael ancajas";
	char * c = copy(x,strlen(x));


	printf("%s\n",x);
	printf("%s\n",c);
	//cout<<*x<<endl;
	//cout<<*c<<endl;

	return 0;
}
