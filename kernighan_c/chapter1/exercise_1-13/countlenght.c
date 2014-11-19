#include <stdio.h>


//Question 1-13: Write a program to print a histogram of the lengths of words
//in its input. It is easy to draw the histogram with the bars horizontal; a
//vertical orientation is more challenging.

#define IN 0
#define OUT 1

int main(void){
	
	int loc=OUT;
	int length=0;
	int hist[10] = { 0 };
	//0-8 (1 to 9 length) then 9 is others
	char c;
	int max=0;

	while( (c=getchar())!=EOF ){
		if (c==' ' || c == '\n' || c == '\t'){
			loc=OUT;
			if ( length != 0 ){
				if (length < 10){
					hist[length-1]++;	
					max = max < hist[length-1]? hist[length-1]: max;
				}
				else{
					hist[9]++;
					max = max < hist[9]? hist[9]: max;
				}
			}
			length=0;
		}	
		else {
			loc=IN;
			++length;
		}
	}

	int i=0;
	for (i=0; i < 10; ++i)
		printf("%d: %d \n", i+1, hist[i]);	
	int j;

	for (i=max; i > 0; i--){

		for(j=0; j < 10; j++){

			if (hist[j]==i){
				printf("*");
				--hist[j];
			}
			else {
				printf(" ");
			}
		}

 	 	printf("\n");
	}
	for(j=0; j < 10; j++)
		printf("%d",j+1);
	

	return 0;

}

//Description: In this solution, I only draw the vertical histogram as the
//horizontal is straight forward
