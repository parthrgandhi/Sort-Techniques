
#include <stdio.h>	// for input / output function - printf() and scanf()	
#include <conio.h>	// for getch() function
#include <math.h>	// for maths function such POW() etc.
//#include <stdlib.h> - used for rand() function


void swap(int * ,int * );
void bubblesort(int a[],int n);

void main()
{
	int A[7] = {19,15,6,9,3,14,18};
	int l,k;
	
	l= sizeof(A)/sizeof(int);
	

	bubblesort(A,l);	

	
	for(k=0;k<l;k++)
	{
		
	   printf("%d\t",A[k]); 	
	}
}

void bubblesort(int a[], int n)
{
   int i,j;
   int flag,temp;
   
   for (i=0;i<n-1;i++)
   {
   	flag = 1;
   	
   	for(j=0;j<n-i-1;j++)
   	{
   		if (a[j]>a[j+1])
		   {
		   	
		   	swap(&a[j],&a[j+1]);
		   	/*temp = a[j];
			a[j] = a[j+1];
			a[j+1] = temp;*/
			
		   	flag = 0;
		   	
		   	}	
	
	}
	
     if (flag == 1)
	 {
	 	break;
	  }	
   }
}

void swap(int *a , int *b)
{
	int temp;
	
	temp = *a;
	*a = *b;
	*b = temp;
	
	
}
