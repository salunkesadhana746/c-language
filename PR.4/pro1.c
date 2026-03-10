#include<stdio.h>
void main()
{
	/*1. Develop a program that prints the given right half triangle pattern using a nested for loop.
	    41
	    41 42
	    41 42 43
	    41 42 43 44
	    41 42 43 44 45     */
	    
	    
	int i,j;	//declared variable
	
	for(i=41; i<=45; i++)	//outer loop - control rows
	{
		for(j=41; j<=i; j++)	//inner loop  - control columns
		{
			printf("%d ",j);	//printing a message are using printf function.
		}
		printf("\n");	//printing a message are using printf function.
	}
}
