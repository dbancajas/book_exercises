#include<stdio.h>
#include<string.h>
#include<stdlib.h>

#define MAXLINES 10000 /*max # of lines to be sorted */

//Exercise 5-7: Rewrite readlines to store lines in an array supplied by main,
//rather than calling alloc to maintain storage. How much faster is the
//program?
//

//Answer: there's probably not a difference in runtime? This question is a bit vague for me.
//readlines3() below is the solution from the answer key. The difference with
//my solution is that it allocated a 1-D array instead of a 2d array. I guess
//this is faster given that the malloc() is only called once.
//
//The solution manual has a minor bug. should be "Char *linestop = linestor + MAXLEN * MAXSTOP;"
//
//the new version is slower?

char *lineptr[MAXLINES];

#define MAXLEN 1000 /*max lenght of any input line */

int readlines(char *lineptr[], int nlines);
int readlines2(char *lineptr[], int nlines);
int readlines3(char *lineptr[], char * linestor, int nlines);
void writelines(char *lineptr[], int nlines);

void qsort2(char *lineptr[], int left, int right);

/* sort input lines */

int main(void){
	int nlines=0;
	int i;

	//for (i=0; i < MAXLINES; ++i)
	//	lineptr[i]=(char*)malloc(sizeof(char)*MAXLEN);
	char * linestor = (char *)malloc(sizeof(char)*MAXLEN*MAXLINES);

	if (!linestor){
		printf("error mem alloc");
		return -1;
	}

	//if ((nlines = readlines2(lineptr,MAXLINES)) >= 0){
	if ((nlines = readlines3(lineptr,linestor,MAXLINES)) >= 0){
		qsort2(lineptr,0,nlines-1);
		writelines(lineptr,nlines);
		return 0;
	}
	else {
		printf("error: input too big to sort\n");
		return 1;
	}
}


//int getline(char *, int);

char *alloc(int a){
	return (char *) malloc(sizeof(char)*a);
}

//getline from chapter 4 , not tested yet
int getline2(char *s, int lim){
	int c, i;

	i=0;

	while (--lim > 0 && (c=getchar()) !=EOF && c != '\n')
		s[i++]=c;

	if (c=='\n')
		s[i++]=c;

	s[i]='\0';

	return i;
}



/*readlines: read input lines */

int readlines(char *lineptr[], int maxlines){
	int len, nlines;
	char *p, line[MAXLEN];

	nlines=0;

	while((len = getline2(line,MAXLEN)) > 0)
		if (nlines >= maxlines || (p = alloc(len))==NULL)
			return -1;
	else {
		line[len-1]='\0';
		strcpy(p,line);
		lineptr[nlines++] = p;
	}
	return nlines;
}
//My answer
//
int readlines2(char *lineptr[], int maxlines){
	int len, nlines;
	char line[MAXLEN];

	nlines=0;

	while((len = getline2(line,MAXLEN)) > 0)
		if (nlines >= maxlines)
			return -1;
		else {
			line[len-1]='\0';
			//strcpy(x,line);
			//lineptr[nlines++] = x;
			strcpy(lineptr[nlines++],line);
		}

	return nlines;
}

int readlines3(char *lineptr[], char * linestor, int maxlines){

	int len, nlines;
	char line[MAXLEN];
	char *lineend = linestor + MAXLEN * MAXLINES;
	char *p=linestor;

	nlines=0;

	while((len = getline2(line,MAXLEN)) > 0)
		if (nlines >= maxlines || (p + len) > lineend)
			return -1;
		else {
			line[len-1]='\0';
			strcpy(p,line);
			lineptr[nlines++] = p;
			p += len;
		}

	return nlines;

}


void writelines( char *lineptr[], int nlines){

	while(nlines-- > 0)
		printf("%s\n", *lineptr++);

}

void qsort2(char *v[], int left, int right)
{

	int i, last;
	void swap(char *v[], int i, int j);

	if (left >= right)
		return;
	swap(v,left,(left+right)/2);
	last=left;

	for (i=left+1; i<=right; i++)
		if (strcmp(v[i], v[left]) < 0)
			swap(v,++last,i);
	swap(v,left,last);
	qsort2(v,left,last-1);
	qsort2(v, last+1, right);
}

void swap(char *v[], int i, int j){

	char *temp;
	temp = v[i];
	v[i] = v[j];
	v[j] = temp;
}
