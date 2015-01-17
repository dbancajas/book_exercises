struct Stash {

	int size;//size is the size of each element
	int quantity;
	int next;

	unsigned char * storage;

	void initialize(int size);
	void cleanup();
	int add (const void * element);
	void * fetch(int index);
	int count();
	void inflate(int increase);

};
