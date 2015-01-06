#ifndef STACK_H
#define STACK_H

struct Stack {
	struct Link {
		void *data;
		Link* next;
		void initialize(void * data, Link* nxt);
	}* head;
	void initialize();
	void push(void* dat);
	void *peek();
	void *pop();
	void cleanup();
};

#endif
