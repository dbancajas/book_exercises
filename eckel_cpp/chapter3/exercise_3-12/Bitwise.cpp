#include<iostream>

using namespace std;

//Exercise 3-12: Modify Bitwise.cpp to use the function from rotation.cpp. Make
//sure you display the results in sucha a way that it's clear what's happening
//with the results.
//
void printBinary(const unsigned char val) {
	for(int i = 7; i >= 0; i--)
		if(val & (1 << i))
			std::cout << "1";
		else
			std::cout << "0";
}

#define PR(STR,EXPR) \
	cout<< STR; printBinary(EXPR); cout<<endl;


//rotate functions by one position only.
unsigned char rol(unsigned char val){
	int highbit;

	if(val & 0x80) //0x80 is the high bit only
		highbit = 1;
	else
		highbit = 0;
	//Left shift (bottom bit becoms 0):
	val <<=1;
	//Rotate the high bit onto the bottom:
	val |= highbit;
	return val;
}

unsigned char ror(unsigned char val){
	int lowbit;

	if(val & 1)
		lowbit = 1;
	else
		lowbit = 0;

	val >>= 1;
	val |= (lowbit << 7);
	return val;
}

int main(void){
	unsigned int getval;
	unsigned char a,b;

	cout << "Enter a number between 0 and 255:";
	cin >> getval;
	a = getval;
	PR("A in binary: ",a);
	cout << "Enter a number between 0 and 255:";
	cin >> getval;
	b = getval;
	PR("B in binary: ",b);
	PR(" a | b = ", a | b);
	PR(" a & b = ", a & b);
	PR(" a ^ b = ", a ^ b);
	PR(" ~a = ", ~a );
	//An interesting bit pattern:
	unsigned char c = 0x5A;

	PR("c in binary:",c);
	a |= c;
	PR("a |= c; a = ", a);
	a &= c;
	PR("a &= c; a = ", a);
	a ^= c;
	PR("a ^= c; a = ", a);

	
	unsigned char d = 0x3;
	unsigned char e = 0x80;

	PR("d in binary:", d);
	PR("e in binary:", e);
	d = ror(d);
	e = rol(e);

	cout << "after rotations"<<endl;
	PR("d in binary:", d);
	PR("e in binary:", e);


	return 0;
}
