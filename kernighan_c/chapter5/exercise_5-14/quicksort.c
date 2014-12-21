#include<stdio.h>

//Exercise 5-14: Modify the sort program to handle a -r flag, which indicates sorting in reverse or decreasing order. Be sure that -r works with -n.

void swap (int *i, int *j){
	if (i==j)
		return;

	int t=*i;
	*i=*j;
	*j=t;
}

void quicksort(int * array, int left, int right, int (*comp)(int,int)){

	if (left>=right)
		return;

	int pivot = (left + right)/2;
	int pivotElem = array[pivot];
	swap(&array[pivot],&array[right]);
	int last = left;


	int i;

	for(i=left; i < right; i++){
		//if (array[i]<pivotElem)
		if (comp(array[i],pivotElem))
			swap(&array[i],&array[last++]);
	}
	swap(&array[right],&array[last]);

	quicksort(array,last+1,right,comp);
	quicksort(array,left,last-1,comp);

}

int greater(int a, int b){
	return a>b;
}

int lesser(int a, int b){
	return a<b;
}

int main(void){

	int a[10] = {1, 2, 3, 9, 8, 7, 6, 5, 4, 0};

	int (*c)(int, int);
//	c=&greater;
	c=&lesser;

	int i;
	for(i=0; i<10; i++)
		printf("%d ",a[i]);
	puts("");

	quicksort(a,0,9,c);

	for(i=0; i<10; i++)
		printf("%d ",a[i]);
	puts("");

}
