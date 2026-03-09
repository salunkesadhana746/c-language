#include<stdio.h>
void main()
{
	/*2. 	1
			1 2
			1 2 3
			1 2 3 4
			1 2 3 4 5
			1 2 3 4
			1 2 3
			1 2
			1			*/
			
	int i,j;
	
	for(i=1; i<=5; i++)		//outer loop - control rows
	{
		for(j=1; j<=i; j++)		//inner loop - control columns
		{
			printf("%d ",j);//printing a message are using printf function.
		}
		printf("\n");//printing a message are using printf function.
	}
	for(i=4; i>=1; i--)  //outer loop - control rows
	{
		for(j=1; j<=i; j++)		//inner loop - control columns
		{
			printf("%d ",j);//printing a message are using printf function.
		}
		printf("\n");//printing a message are using printf function.
	}
}
