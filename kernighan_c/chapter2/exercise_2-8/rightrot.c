#include<stdio.h>

//Exercise 2-8: Write a function rightrot(x,n) that returns the value of the
//integer x rotated to the right by n bit position.

int rightrot(int x, int n){

	int b = ~(~0<<n);
	int a = x & b;

	return (a<<(sizeof(int)*8-n) | (x>>n));
}

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



int main(){
	int x = 0x7;
	int y = rightrot(x,3);

	printBits(sizeof(int),&x);
	printBits(sizeof(int),&y);


	return 0;
}
