#include<stdio.h>
void main()
{
	/*8.    1 2 3 4 5
	          2 3 4 5
	            3 4 5
	              4 5
	                5		*/
	                
	int i,j,k;  //declared variable
	
	for(i=1; i<=5; i++) // outer loop - count of row
	{
		for(k=i; k>=2; k--) // inner loop for printing a space
		{
			printf("  ");  //printing a message are using printf function.
		}
		for(j=i; j<=5; j++)  //inner loop - count of col
		{
			printf("%d ",j);//printing a message are using printf function.
		}
		printf("\n");//printing a message are using printf function.
	}
}
