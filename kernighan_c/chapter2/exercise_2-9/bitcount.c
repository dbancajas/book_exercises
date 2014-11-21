#include<stdio.h>

//Exercise 2-9: In a two's complement number system, x &= (x-1) deletes the
//rightmost 1-bit in x. Explain why. Use this observation to write a faster
//version of bitcount.
//
//Answer: The operation (x-1) turns the right part of x, starting from the
//rightmost 1-bit, into 01111..11. If you AND it with the x itself, it
//essentially removes the rightmost bit from x.

int bitcount(unsigned x){

	int b=0;
	for (; x!=0; x>>=1)
		if (x & 0x1)
			b++;

	return b;
}

int fastbitcount(unsigned x){

	int b=0;

	while(x){
		b++;
		x&=(x-1);
	}

	return b;
}
	

int main(){

	printf("%d %d\n",bitcount(7287),fastbitcount(7287));

	return 0;
}
