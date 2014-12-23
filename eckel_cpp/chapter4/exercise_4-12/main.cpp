#include<iostream>
#include<cassert>

//Exercise 4-12: Write a program that uses assert() with an argument that is always false(zero) to see what happens when you run it. Now compiler it with #define NDEBUG and run it again to see the difference.
//
//
//Answer: NDEBUG disables all assert statements

int main(void){
	assert(0);
}
