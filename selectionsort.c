
#include <stdio.h>	// for input / output function - printf() and scanf()	
#include <conio.h>	// for getch() function
#include <math.h>	// for maths function such POW() etc.
//#include <stdlib.h> - used for rand() function

void selectionsort (int a[],int n);


void main ()
{
	int A[6]={17,2,5,1,20,23};
	int k;
	int l;
	//int A[];
	//char ch;
	
	k=0;
/*	printf("Enter Values for Array A\n");
	while (ch =='Y'|| ch == 'y') -------------------------------Check how to implement dynamic memory allocation for array
	{
		scanf("%d",A[k]);
		k = k+1;
		printf("Do you want to Enter more values ? [y/n]\n");
		ch = getch();
		
	}*/
	
	l= sizeof(A)/sizeof(int);
	

	selectionsort(A,l);	

	
	for(k=0;k<l;k++)
	{
		
	   printf("%d\t",A[k]); 	
	}
	
}


void selectionsort(int a[],int n)
{

  int i,j,imin;
  int temp = 0;
  
   for (i=0;i<n-2;i++)
	
	{
		imin = i;
		
		for(j=i+1;j<n-1;j++)
		{
		   if (a[j]<a[imin])
		   {
		   	 imin = j;
		   }
		   	
		}
		
		temp = a[i];
		a[i] = a[imin];
		a[imin] = temp;
		
	}


}
