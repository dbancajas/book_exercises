#include<iostream>

#define PI 3.14159

using namespace std;

int main(void){

	float radius=0.0;
	float area=0.0;

	cout<<"Please enter radius of the circle"<<endl;
	cin>>radius;
	area = PI * radius * radius;
	cout<<"Area of circle: "<<area<<endl;

	return 0;
}
