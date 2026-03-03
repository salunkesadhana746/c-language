#include<stdio.h>
void main()
{
	/*5. 5
         4 5
         3 4 5
         2 3 4 5
         1 2 3 4 5*/
        
	int i,j;//declared variable
	
	for(i=5; i>=1; i--)  //outer loop - row
	{
		for(j=i; j<=5; j++)		//inner loop - col
		{
			printf("%d ",j);//printing a message are using printf function.
		}
		printf("\n");//printing a message are using printf function.
	}

}
