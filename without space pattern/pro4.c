#include<stdio.h>
void main()
{
	/*4.5
        5 4
        5 4 3
        5 4 3 2 
        5 4 3 2 1*/
        
	int i,j;//declared variable
	
	for(i=5; i>=1; i--)   //outer loop - row
	{
		for(j=5; j>=i; j--)   //inner loop - col
		{
			printf("%d ",j);//printing a message are using printf function.
		}
		printf("\n");//printing a message are using printf function.
	}
}
