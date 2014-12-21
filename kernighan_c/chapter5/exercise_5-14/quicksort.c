#include<stdio.h>

//Exercise 5-14: Modify the sort program to handle a -r flag, which indicates sorting in reverse or decreasing order. Be sure that -r works with -n.

void swap (int *i, int *j){
	int t=*i;
	*i=*j;
	*j=t;
}

void quicksort(int * array, int left, int right){

	if (left>=right)
		return;

	int pivot = (left + right)/2;
	int pivotElem = array[pivot];
	swap(&array[pivot],&array[right]);
	int last = right;


	int i;

	for(i=left; i < right; i++){
		if (array[i]>pivotElem)
			swap(&array[i],&array[--last]);
	}
	swap(&array[right],&array[last]);

	quicksort(array,last+1,right);
	quicksort(array,left,last-1);

}

int main(void){

	int a[10] = {1, 2, 3, 9, 8, 7, 6, 5, 4, 0};

	int i;
	for(i=0; i<10; i++)
		printf("%d ",a[i]);
	puts("");

	quicksort(a,0,9);

	for(i=0; i<10; i++)
		printf("%d ",a[i]);
	puts("");

}
