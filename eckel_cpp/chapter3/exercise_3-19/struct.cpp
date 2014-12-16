#include<iostream>

using namespace std;

//Exercise 3-19: Apply the technique in ArrayAddresses.cpp to print out the
//size of the struct and the addresses of the array elements in StructArray.cpp

typedef struct {
	int i, j, k;
}ThreeDPoint;

//Answer: Each struct element has a size = 3 * 4bytes

int main(void){
	ThreeDPoint p[10];

	for (int i=0; i<10; i++){
		cout << "&p[" << i << "] = " <<(long)&p[i]<<endl;
	}
	

	return 0;
}
