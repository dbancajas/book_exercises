#include "Stack.h"
#include "../require.h"
#include<iostream>

using namespace std;


void 
Stack::Link::initialize(void* dat, Link* nxt){
	data = dat;
	next = nxt;
}

void Stack::initialize(){ head=0; }

void Stack::push(void* dat){
	Link* newLink = new Link;
	newLink->initialize(dat,head);
	this->head = newLink;
//	double *x = (double *) dat;
	//std::cout << "pushign: " << *x << endl;
}


void* Stack::peek() {
	require(head != 0, "Stack empty");
	return head->data;
}

void* Stack::pop() {
	if (head == 0) 
		return 0;

	void* result = head->data;

	Link* oldHead = head;

	head = head->next;
	//require(head != head->next, "pointers should not be equal");
	delete oldHead;
	//require(oldHead == NULL, "oldHead not NULL");
	return result;

}

void Stack::cleanup() {
	require(head == 0, "Stack not empty");
}
