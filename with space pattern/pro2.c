#include<stdio.h>
void main()
{
	/*2.        1
	          2 1
            3 2 1
          4 3 2 1 
        5 4 3 2 1  		*/
        
	int i,j,k;//declared variable
	
	for(i=1; i<=5; i++)//all condition are true then print functions message.
	{
		for(k=i; k<=4; k++)//all condition are true then print functions message.
		{
			printf("  ");//printing a message are using printf function. 
		}
		for(j=i; j>=1; j--)//all condition are true then print functions message.
		{
		 	printf("%d ",j);//printing a message are using printf function. 	
		}
		printf("\n");//printing a message are using printf function.
	}
}
