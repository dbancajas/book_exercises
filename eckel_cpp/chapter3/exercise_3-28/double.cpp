#include<iostream>

using namespace std;

//Exercise 3-28: Create a function that takes a pointer to an array of
//double and a value indicating the size of that array. The function
//should print each element in the array. Now create an array of double
//and initialize each element to zer, then use your function to print
//the array. Next use reinterpret_cast to cast the starting address
//your arrray to an unsigned char *, and set each by of the array to 1.
//Now use your array printing function to print the results. Why do you
//think each element was not set to the value 1.0?

//Answer: Because the double variable stores an encoded value.
//

void doubleprint(double a [], int size){

	for (int i = 0; i < size; i++){
		cout<<a[i]<<" ";
	}
	cout<<endl;
}

int main(void){
	int size=10;
	double b[size];

	for (int i = 0; i < 10; i++){
		b[i]=0.0;
	}
	doubleprint(b,10);

	unsigned char * pc = reinterpret_cast<unsigned char *>(&b[0]);

	for (int i=0; i < (int) (4 * sizeof(double)); i++){
		pc[i]=1;
	}
	
	doubleprint(b,10);

	return 0;
}
