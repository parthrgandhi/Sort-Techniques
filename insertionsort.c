
#include <stdio.h>	// for input / output function - printf() and scanf()	
#include <conio.h>	// for getch() function
#include <math.h>	// for maths function such POW() etc.
//#include <stdlib.h> - used for rand() function

void swap (int *, int *);
void insertionsort(int a[],int);
void main()
{
	//int A[7] = {19,15,6,9,3,14,18};
	int A[6]={17,2,5,1,20,23};
	int l,k;
	
	l= sizeof(A)/sizeof(int);
	

	insertionsort(A,l);	

	
	for(k=0;k<l;k++)
	{
		
	   printf("%d\t",A[k]); 	
	}
}

void insertionsort(int a[],int n)
{
	int i,key;
	
	for (i=1;i<n;i++)
	{
		
		key = i;
		
		while( key>0 && a[key-1]>a[key])
		{
			swap(&a[key-1],&a[key]);
			
			key--;
		}
	}
}

void swap (int *a,int *b)
{
	int temp;
	
	temp = *a;
	*a = *b;
	*b = temp;
}

