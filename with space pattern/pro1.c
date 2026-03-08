#include<stdio.h>
void main()
{
         /*1.         1
			        1 2
		          1 2 3
		        1 2 3 4
		      1 2 3 4 5 		*/
		      
    int i,j,k;
    
    for(i=1; i<=5; i++) //all condition are true then print functions message.
    {
    	for(k=i; k<=4; k++) // k=4 4<=4 : true //all condition are true then print functions message.
    	{
    		printf("  "); // printing a message are using printf function.
		}
    	for(j=1; j<=i; j++) // j=5 5<=5 : true //all condition are true then print functions message.
    	{
    		printf("%d ",j);	//printing a message are using 
		}
		printf("\n");//printing a message are using printf function
	}
}
