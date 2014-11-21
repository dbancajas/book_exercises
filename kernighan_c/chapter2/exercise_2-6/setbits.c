#include<stdio.h>

//Exercise 2-6: Write a function setbits(x,p,n,y) that returns x with the n
//bits that begin at position p set to the rightmost n bits of y, leaving the
//other bits unchanged.
//

//printsBits function is taken from stockoverflow. It will print the binary
//equivalent of any data type

void printBits(size_t const size, void const * const ptr)
{
    unsigned char *b = (unsigned char*) ptr;
    unsigned char byte;
    int i, j;

    for (i=size-1;i>=0;i--)
    {
        for (j=7;j>=0;j--)
        {
            byte = b[i] & (1<<j);
            byte >>= j;
            printf("%u", byte);
        }
    }
    puts("");
}

int setbits(int x,int p, int n, int y){
	int a = ~((~0)<<n);
	y = (a & y)<<(p-n+1);
	printf("y:");

	printBits(sizeof(int),&y);

	int b = ((~0)<<(p+1))|(~((~0)<<(p+1-n)));
	//int b = ~((~0)<<(p+1-n));
	printf("b:");
	printBits(sizeof(int),&b);
	x = x & b;

	return x | y;
}

int main(){
	int i=0;
	int j=~0;
	
	int x = setbits(j,15,4,i);

	printBits(sizeof(x),&j);
	printBits(sizeof(x),&i);
	printBits(sizeof(x),&x);
	
	return 0;
}
