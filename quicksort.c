
#include <stdio.h>	// for input / output function - printf() and scanf()	
#include <conio.h>	// for getch() function
//#include <math.h>	// for maths function such POW() etc.
#include <stdlib.h> // used for rand() function

void quicksort(int a[],int ,int );
int partion(int a[],int,int);
void swap(int *,int *);

void main()
{
	//int A[7] = {19,15,6,9,3,14,18};
	int A[6]={17,2,5,1,20,23};
	int l,k;
	
	l= sizeof(A)/sizeof(int);


	quicksort(A,0,l-1);	
	
	for(k=0;k<l;k++)
	{
		
	   printf("%d\t",A[k]); 	
	}
	
}


void quicksort(int a[],int f,int l)
{
	int pivot_index;
	
	if(f<l)
	{
		pivot_index = partion(a,f,l);
		
		quicksort(a,f,pivot_index-1);
		quicksort(a,pivot_index+1,l);
		
	}
	
	
}


int partion(int a[],int fs, int lt)
{
	int pindex = fs - 1;
	//int pindex = fs;
	int pivot =  a[lt];
	
	int i;
	
	for(i=fs;i<lt;i++)
	{
		if(a[i]<=pivot)
		{
			pindex++;
			swap(&a[i],&a[pindex]);
			//pindex++;
		}
	}
	
	pindex++;
	swap(&a[lt],&a[pindex]);
	
	return pindex;
	
}


void swap(int *a,int *b)
{
	int temp;
	temp = *a;
	*a = *b;
	*b = temp;
	
}
