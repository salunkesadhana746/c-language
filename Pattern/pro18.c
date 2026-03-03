#include<stdio.h>
void main()
{
	/*18.   0
			0 1
			0 1 0
			0 1 0 1
			0 1 0 1 0		*/
			
	int i,j;	//declared variable
	
	for(i=5; i>=1; i--)		//i=5 5>=1 : true
	{
		for(j=5; j>=i; j--)	//j=5 5>=5 : true
		{
			if(j%2==0)//if statement even condition
			{
				printf("1 ");//printing a message are using printf function.
			}
			else//else statement odd condition
			{
				printf("0 ");//printing a message are using printf function.
			}
		}
		printf("\n");//printing a message are using printf function.
	}
}
