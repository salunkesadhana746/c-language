#include<stdio.h>

void main()
{
	/*15.   1
			0 1
			1 0 1
			0 1 0 1
			1 0 1 0 1		*/
			
	int i,j;		//declared variable
	
	for(i=1; i<=5; i++)		//i=5 5<=5 : true
	{
		for(j=i; j>=1; j--)		//j=5 5<=5 : true
		{
			if(j%2==0)		//if statement even condition
			{
				printf("0 ");//printing a message are using printf function.
			}
			else	//else statement odd condition
			{
				printf("1 ");//printing a message are using printf function.
			}
		}
		printf("\n");//printing a message are using printf function.
	}
}
