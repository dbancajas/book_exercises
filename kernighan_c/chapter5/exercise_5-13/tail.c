#include<stdio.h>
#include<stdlib.h>
#include<errno.h>


//Exercise 5-13: Write the program tail, which prints the last n lines of its
//input.
//

#define MAX 10000

//Answer: This code has no error checking involved.

void parseArgs(int *lines, int count, char * argv[]){

	int i;

	for (i=1; i < count; i++){
		if ((*(argv+i))[0]!='-')
			continue;
		else {//we found an option
		  if ((*(argv+i))[1] == 'n'){
			  *lines = atoi((*(argv+i+1)));
		  	  return;
		  }
		}
	}

}

int main(int argc, char * argv[]){

	char *lineptr=NULL;
	size_t n=0;

	unsigned numlines = 5;

	parseArgs(&numlines, argc,argv);

	char *f[MAX];
	int i=0;

	for(i=0; i < MAX; i++)
		f[i]=NULL;

	i=0; //i = 0 again

	//printf("Just press Enter to end the program!\n");
	
	while(getline(&lineptr,&n,stdin)!=-1){
		f[i++]=lineptr;
		lineptr=NULL;
		n=0;
	}

	int j;

	//printf("printing stuff\n");

	for (j=i-numlines; j < i; j++){
		printf("%s",f[j]);
	}

	//printf("done!\n");

}
