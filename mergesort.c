
#include <stdio.h>	// for input / output function - printf() and scanf()	
#include <conio.h>	// for getch() function
//#include <math.h>	// for maths function such POW() etc.
#include <stdlib.h> // used for rand() function

/*void merge(int l[],int r[],int a[]);
void mergesort(int a[]);*/
void merge(int a[], int,int,int);
void mergesort(int a[],int,int);

void main()
{
	//int A[7] = {19,15,6,9,3,14,18};
	int A[6]={17,2,5,1,20,23};
	int l,k;
	
	l= sizeof(A)/sizeof(int);
	//printf("%d",l); 

	mergesort(A,0,l-1);	
	//mergesort(A);

	
	for(k=0;k<l;k++)
	{
		
	   printf("%d\t",A[k]); 	
	}
}




void mergesort(int a[],int f, int l)

{
	int mid;

	
	if (f<l)
	
	{
		mid = (f+l-1)/2;
		
		mergesort(a,f,mid);
		mergesort(a,(mid+1),l);
		
		merge(a,f,l,mid);
	
	}
	
}


void merge(int a[],int fs,int lt,int m)
{

	
	int nl = m - fs +1;
	int nr = lt-m;
	
	// temperory array for sorting Left side and right side
	int l[nl];
	int r[nr];
	
	
	int i,j,k;
	
	
	for(i=0;i<nl;i++)
	{
		l[i] = a[i+fs];
		
	}
	

	for(j=0;j<nr;j++)
	{

		r[j] = a[j+m+1];
		
		
	}

	i = 0;
	j = 0;
	k = fs;
	
	while (i<nl && j<nr)
	{
		if (l[i]>r[j])
		{
			a[k] = r[j];
			j++;
		
		}
		else
		{
			a[k] = l[i];
			i++;
			
		}
		k++;
		
	}
	
	while (i<nl)
	{
		a[k] = l[i];
		i++;
		k++;
				
	}
	
	while (j<nr)
	{
		a[k] = r[j];
		j++;
		k++;
		
	}
	
	
		
	
}


