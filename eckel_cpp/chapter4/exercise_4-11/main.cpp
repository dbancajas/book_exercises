#include<iostream>


using namespace std;

int main(void){


#ifdef DEBUG
	cout<<"DEBUG is defined"<<endl;
#else
	cout<<"DEBUG is NOT defined"<<endl;
#endif

}
