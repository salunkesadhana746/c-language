#include<stdio.h>

void main()
{
	/*14.   * * * * *
			* * * *
			* * *
			* *
			*     	*/
	
	int i,j;  //declared variable 
	
	for(i=5; i>=1; i--)		//i=1 1>=1 : true
	{
		for(j=1; j<=i; j++) 	//j=1 j<=i 1<=1 :true
		{
			printf("* ");  //print a message 
		}
		printf("\n");		//printing a message
	}
}
//* * * * *
//* * * *
//* * *
//* *
//*
