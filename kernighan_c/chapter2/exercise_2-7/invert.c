#include<stdio.h>

//Exercise 2-7: Write a function invert(x,p,n) that returns x with the n bits
//that being at position p inverted (i.e. 1 change into 0 and vice versa),
//leaving the other unchanged.
//
//

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



int invert(int x, int p, int n){
	int m = (~(~0<<n)) << (p+1-n);
	int a = x & m;
	int b = x & ~m;

	return (b | ~a);

	//1.extrac n bits starting at p
	//2. clear n bits starting at p in x
	//2. invert extracted bits
	//3. bitwise OR to cleared X

}
int main(){

	int x = ~0;
	int in = invert(x,15,6);

	printBits(sizeof(int),&in);
	
	return 0;
}
