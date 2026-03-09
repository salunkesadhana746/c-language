#include<stdio.h>
void main()
{
	/*4. 1				   1
		 1 2 			 2 1
   		 1 2 3         3 2 1
		 1 2 3 4     4 3 2 1
		 1 2 3 4 5 5 4 3 2 1	*/
		 
     int i,j,k;	//declared variable
     
     for(i=1; i<=5; i++)	//outer loop - control rows
     {
     	for(j=1; j<=i; j++)	//inner loop - control columns
     	{
     		printf("%d ",j);//printing a message are using printf function.
        }
        for(k=i; k<=4; k++)	//inner loop - control columns
        {
        	printf("    ");//printing a message are using printf function.
		}
		for(j=i; j>=1; j--)	//inner loop - control columns
		{
			printf("%d ",j);//printing a message are using printf function.
		}
		printf("\n");//printing a message are using printf function.
	 }
     
}
