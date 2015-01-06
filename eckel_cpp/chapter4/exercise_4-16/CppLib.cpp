#include "CppLib.h"
#include <iostream>
#include <cassert>

using namespace std;

//Quantity of elements to add when increasing storage.
//
//const int increment = 100;

void Stash::initialize(int sz){
	size = sz;
	quantity = 0;
	//storage = 0;
	storage.clear();
	next = 0;
}

int Stash::add(const void * element){
	//if(next >= quantity)
	//	inflate(increment);
	//copy element into storage,
	//starting at next empty space
	
	//int startBytes = next * size;
	
	unsigned char * e = (unsigned char *) element;

	for (int i=0; i < size; i++)
		//storage[startBytes + i] = e[i];
		storage.push_back(e[i]);

	//next++;

	//return (next - 1);//index number
	return storage.size()/size - 1;

}

void * Stash::fetch(int index) {
	//Check index boundaries:
	assert(0 <= index);

	if(index > count()-1)
		return 0;

	//return &(storage[index * size]);
	unsigned char * e = new unsigned char[size];
	assert (e!=NULL);

	for (int i=0; i < size; i++)
		e[i] = storage[index * size + i];

	return e;
}

int Stash::count() {
	//return next;
	return storage.size()/size;
}

void Stash::inflate(int increase) {
	assert(increase > 0);
	int newQuantity = quantity + increase;
	int newBytes = newQuantity * size;
	int oldBytes = quantity * size;

	unsigned char * b = new unsigned char[newBytes];

	for (int i=0; i < oldBytes; i++)
		b[i] = storage[i];

	//delete []storage;
	//storage = b;
	quantity = newQuantity;
}

void Stash::cleanup() {
	if (storage.size() != 0) {
		cout<< "freeing storage" << endl;
		storage.clear();
		//delete []storage;
	}
}

