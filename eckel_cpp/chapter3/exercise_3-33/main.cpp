#include<iostream>

using namespace std;

//Exercise 3-33: Declare a pointer to a function taking an int argument and
//returning a pointer to a function that takes a char argument and returns a
//float.


typedef float (*fp1)(char a);

float func2 (char a){

	return static_cast<int> (a) * 5.0;
}

fp1 func_orig(int a){
	return  func2;
}

//Another exercise: declare a function pointer that takes in two arguments: 1.) int 2.) function pointer
//to a function that takes in float and returns a double. The return of this function pointer is a function pointer
//to function that takes int three arguments: 2 ints and 1 float and returns a string.
//
//This shows how you can make the code readable by just breaking down simple typedef declarations.

typedef double (*fpsmall)(int);

typedef string (*fpbig)(int,int,float);


fpbig (*fptr)(int, fpsmall);

double fs(int a){
	cout<<"SMALL: small is called"<<endl;

	return (double)(a);
}

string fb(int a, int b, float c){

	cout<<"BIG: args are not being used by BIG FUNC"<<endl;
	return "yes man!";

}

fpbig thefunc(int a, fpsmall){

	cout<<"THE FUNC:args are not used again"<<endl;
	return fb;
}

int main(void){

	//float (*(*functor)(int))(char);
	//float (*(*functor)(int))(char);
	fpsmall fps = fs;
	fpbig fpb;
	
	fptr=&thefunc;

	fpb = *fptr(1,fps);


	fp1 ((*functor)(int)); //this is definitely more readable.

	functor = func_orig;
	fp1 fp;
	fp = functor(1);

	cout<<"a called through function pointer:" <<fp('a')<<endl;
	
	fpb(1,1,1.0);

	return 0;
}
