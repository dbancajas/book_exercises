#include<stdio.h>

//Exercise 3-1: Our binary search makes two tests inside the loop, when one
//would suffice (at the price of more tests outside).  Write a version with
//only one test inside the loop and measure the difference in run-time.

int binsearch(int x, int v[], int n){

	int low, high , mid;
	low=0;
	high = n-1;
	
	while(low<=high){
		mid = (low+high)/2;
		
		if(x<v[mid])
			high=mid-1;
		else if (x>v[mid])
			low = mid+1;
		else
			return mid;
	}
	return -1;
}

int binsearch2(int x, int v[], int n){
	int low, high,mid;
	low=0;
	high=n-1;

	while(low<=high){
		mid=(low+high)/2;
		//printf("%d %d %d\n", low, mid, high);
		
		if(x < v[mid])
			high=mid-1;
		else
			low=mid+1;
	}

	if (low < n && x==v[low])
		return low;
	else if (high >= 0 && x==v[high])
		return high;
	else 
		return -1;
}

int main(){
	
	int a[10]={1,2,3,4,5,6,7,8,9,20};
	int i=0;
	for(;i<10;++i)
		printf("%d ",a[i]);

	puts("");

	printf("searching 1:%d\n",binsearch(1,a,10));
	printf("searching 1:%d\n",binsearch2(1,a,10));
	printf("searching 20:%d\n",binsearch(20,a,10));
	printf("searching 20:%d\n",binsearch2(20,a,10));
	printf("searching 7:%d\n",binsearch(7,a,10));
	printf("searching 7:%d\n",binsearch2(7,a,10));
	printf("searching 12:%d\n",binsearch(12,a,10));
	printf("searching 12:%d\n",binsearch2(12,a,10));

	return 0;
}
