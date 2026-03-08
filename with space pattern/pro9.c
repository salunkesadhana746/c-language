#include<stdio.h>
void main()
{
	/*9.    5 4 3 2 1
              5 4 3 2
	            5 4 3
	              5 4
	                5	  */
               
    int i,j,k;		//declared variable
    
    for(i=1; i<=5; i++)// outer loop - control row
    {
    	for(k=i; k>=2; k--)// inner loop for printing a space
    	{
    		printf("  ");//printing a message are using printf function.
		}
    	for(j=5; j>=i; j--)// inner loop - control of col
    	{
    		printf("%d ",j);//printing a message are using printf function.
		}
		printf("\n");//printing a message are using printf function.
	}	
}
