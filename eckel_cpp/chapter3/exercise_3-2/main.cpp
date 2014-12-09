#include<iostream>

using namespace std;

//Exercise 3-2: Write a program that uses two nested for loops and the %
//operator to detect and print prime numbers (integral number that are not
//evenly divisible by any other numbers except for themseleves and 1).

using namespace std;

int main(void){

//should have been unsigned	
	int limit=100;

	for(int i=2; i < limit; i++){
		bool prime=true;
		for (int j=2; j < i; j++){
			if (!(i%j)){
				prime=false;
				break;
			}
		}
		if (prime)
			cout<<i<<" is prime."<<endl;
			
	}

	return 0;
}
