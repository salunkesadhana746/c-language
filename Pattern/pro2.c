#include<stdio.h>
void main()
{
	/*2.1
	    2 1
	    3 2 1
	    4 3 2 1
	    5 4 3 2 1*/
	    
	
	int i,j;//declared variable
	
	for(i=1; i<=5; i++)  //outer loop - row
	{
		for(j=i; j>=1; j--)  //inner loop - col
		{
			printf("%d ",j);//printing a message are using printf function.
		}
		printf("\n");//printing a message are using printf function.
	}
	    
}
