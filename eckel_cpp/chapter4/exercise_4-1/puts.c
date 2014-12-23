
void puts(){

	//printf("Dean\n");
}


//Exercise 4-1: In the standard C library, the function puts() prints a char
//array to the console. Write a c program that uses puts() but does not include
//<stdio.h> or otherwise declare the function. Compile this program with your C
//compiler.  Now compile it with the C++ compiler and note the difference

//Answer: In C, there is a warning, in C++ there is no warning? I think the
//problem might have been constructed at a time where the compilers where
//primitive.

int main(void) {

	//char * a = (string("sasdf")).c_str();
	puts();

	return 0;
}
