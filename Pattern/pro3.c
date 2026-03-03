#include<stdio.h>
void main()
{
	/*3. 1
	     2 2
	     3 3 3
	     4 4 4 4
	     5 5 5 5 5*/
	     
    int i,j;//declared variable
    
    for(i=1; i<=5; i++)  //outer loop - row
    {
    	for(j=1; j<=i; j++)  //inner loop - col
    	{
    		printf("%d ",i);//printing a message are using printf function.
		}
		printf("\n");//printing a message are using printf function.
	}
}
