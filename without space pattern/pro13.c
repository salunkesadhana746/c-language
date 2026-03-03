#include<stdio.h>

void main()
{
	/*13.   *
			* *
			* * *
			* * * *
			* * * * * 	*/
			
			
	int i,j;		//declared variable
	
	for(i=1; i<=5; i++)  //i=5  5<=5 : true
	{
		for(j=1; j<=i; j++)		//j=5 j<=i 5<=5 : true
		{
			printf("* ");		//printing a message are using printf function.
		}
		printf("\n");		//printing a message are using printf function.
	}
}

//*
//* *
//* * *
//* * * *
//* * * * *
