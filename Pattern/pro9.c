#include<stdio.h>

void main()
{
	/*9.1 1 1 1 1
        2 2 2 2
        3 3 3
        4 4
        5		*/
        
    int i,j;	//declured variable
    
    for(i=1; i<=5; i++)		//outer loop - row
    {
    	for(j=i; j<=5; j++)		//inner loop - col
    	{
    		printf("%d ",i);	//printing a message are using printf function.
		}
		printf("\n");	//printing a message are using printf function.
	}
}
