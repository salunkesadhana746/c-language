#include<stdio.h>
void main()
{
	/*          1 2 3 4 5
	              1 2 3 4
					1 2 3
					  1 2
					    1  */
					    
	int i,j,k; //declared variable
	
	for(i=5; i>=1; i--)//all condition are true then print functions message.
	{
		for(k=i; k<=4; k++)//all condition are true then print functions message.
		{
			printf("  ");//printing a message are using printf function.
		}
		for(j=1; j<=i; j++)//all condition are true then print functions message.
		{
			printf("%d ",j);//printing a message are using printf function.
		}
		printf("\n");//printing a message are using printf function.
	}
}
