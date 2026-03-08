#include<stdio.h>
void main()
{
	/*4.       5
	         5 4
           5 4 3
         5 4 3 2
       5 4 3 2 1		*/
       
    int i,j,k;		//declared variable
    
    for(i=5; i>=1; i--)//all condition are true then print functions message.
    {
    	for(k=i; k>=2; k--)//all condition are true then print functions message.
    	{
    		printf("  ");//printing a message are using printf function.
		}
    	for(j=5; j>=i; j--)//all condition are true then print functions message.
    	{
    		printf("%d ",j);//printing a message are using printf function. 
		}
		printf("\n");//printing a message are using printf function.
	}
}
