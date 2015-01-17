#include<iostream>


//Exercise 4-21: C++ automatically creates the equivalent of a typedef for structs, as you've seen in this chapter. It also does this for enumerations and unions. Write a small program that demonstrates this.
//


using namespace std;

struct test {
	int a;
	int b;
	
};

int main(void){
	test hello;
	hello.a=2;
	cout<<"hello a:"<<hello.a<<endl;


	return 0;
}

