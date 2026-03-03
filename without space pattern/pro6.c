#include<stdio.h>
void main()
{
	/*6.5
		4 4
		3 3 3
		2 2 2 2
		1 1 1 1 1*/
		
	int i,j;//declared variable
	
	for(i=5; i>=1; i--)		//outer loop - row
	{
		for(j=5; j>=i; j--)		//inner loop - col
		{
			printf("%d ",i);//printing a message are using printf function.
		}
		printf("\n");//printing a message are using printf function.
	}
}
