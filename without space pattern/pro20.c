#include<stdio.h>
void main()
{
	/*20.   -
			| -
			- | -
			| - | -
			- | - | -		*/
			
	int i,j;		//declared variable
	
	for(i=1; i<=5; i++)		//i=5 5<=5 : true
	{
		for(j=i; j>=1; j--)		//j=5 5<=5 : true
		{
			if(j%2==0)		//if statement even condition
			{
				printf("| ");//printing a message are using printf function.
			}
			else	//else statement odd condition
			{
				printf("- ");//printing a message are using printf function.
			}
		}
		printf("\n");//printing a message are using printf function.
	}

}
