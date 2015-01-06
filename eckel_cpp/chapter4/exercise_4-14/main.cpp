#include<iostream>
#include "Stack.h"
#include "Video.h"
#include<sstream>

//Exercise 4-14: Create a stack object to hold the Video objects from Exercise 13. Create several Video objects, store them in the Stack, then display them using Video::print()


using namespace std;

int main(void){

	Stack stack;

	Video* x;

	for (int i=0; i<25; i++){
		x = new Video;
		x->id = (i+5)/2;
		x->genre = (i+10)/5 + 25 * i;
		x->length = (i+100)/54 + i;
		stack.push(x);
	}

	//stack.cleanup();

	for (int i=0; i<25; i++){
		Video * x = (Video *) stack.pop();
		x->print();
	}




	return 0;

}
