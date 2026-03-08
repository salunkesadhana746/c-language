#include<stdio.h>
void main()
{
	/*10. 5 4 3 2 1
            4 3 2 1
              3 2 1
                2 1
                  1		*/
                  
    int i,j,k;		//declared variable
    
    for(i=5; i>=1; i--)	//outer loop - control row 
    {
    	for(k=i; k<=4; k++)// inner loop for printing a space
    	{
    		printf("  ");	//printing a message are using printf function. 
		}
    	for(j=i; j>=1; j--)		//inner loop - control col
    	{
    		printf("%d ",j);//printing a message are using printf function.
		}
		printf("\n");//printing a message are using printf function.
	}
    
    
}
