#include<iostream>

using namespace std;

//Exercise 3-17: Create a program that defines two int arrays, one right after
//the other. Index off the end of the first array into the second, and make an
//assignment. Print out the second array to see the changes caused by this. Now
//try defining a char variable between the first array definition and the
//second, and repeat the experiment. You may want to create an array printing
//function to simplify your coding.

void printArray(int a[],int size){

	for(int i=0; i<size; i++){
		cout << a[i] << " ";
	}

	cout<<endl;
}

//Answer: In my machine, the second int array does automatically start right
//after the first so I need a bigger offset to reach the second array.
//
//adding char variables between the two arrays does not do anything on my machine,
//perhaps the compiler stores the variable in different sections (i.e. 1 for each type).

int main(void){
	
	int a[10];
	char c='A';
	char d='B';
	char e='C';
	char f='D';
	char g='E';
	char h='F';
	int b[10];

	for (int i=0; i<10; i++){
		a[i]=i;	
		b[i]=i;	
	}

	for (int j=0; j<18; j++){
		a[j]=a[j]*2;
	}

	printArray(a,10);
	printArray(b,10);

	return 0;
}
