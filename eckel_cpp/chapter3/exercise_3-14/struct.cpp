#include<iostream>

using namespace std;

//Exercise 3-14: Create a struct that holds two string objects and one int. Use
//a typedef for the struct name. Create an instance of the struct, intialize
//all three values in your instance, and print them out. Take the address of
//your instance and assign it to a pointer to your struct type. Change the
//three values in your instance and print them out, all using the pointer.
//

typedef struct aa {
	string f;
	string h;
	int j;
} aa;

int main(void){
	aa obj;
	aa *pobj;

	obj.f = "first string";
	obj.h = "second string";
	obj.j = 1;

	cout << " " << obj.f << " " << obj.h << " " << obj.j << endl;

	pobj = &obj;
	pobj->f="modified first string";
	pobj->h="modified second string";
	(pobj->j)++;

	cout << " " << pobj->f << " " << pobj->h << " " << pobj->j << endl;
	

	return 0;
}
