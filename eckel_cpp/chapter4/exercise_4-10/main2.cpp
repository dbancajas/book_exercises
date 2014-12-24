
#include<iostream>



struct thestruct {
	int myfunc(int a){
		return a + 1;
	}
};


int main(void){

	thestruct b;
	b.myfunc(2); 
	return 0;
}
