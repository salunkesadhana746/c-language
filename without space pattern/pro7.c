#include<stdio.h>

void main()
{
	/*7. 1 2 3 4 5
		 1 2 3 4
		 1 2 3
		 1 2
		 1	*/
		 
    int i,j;	//declared variable
    
    for(i=5; i>=1; i--)		//outer loop - row
    {
    	for(j=1; j<=i; j++)		//inner loop - col
    	{
    		printf("%d ",j);	//printing a message are using printf function.
		}
		printf("\n");	//printing a message are using printf function.
	}
}
