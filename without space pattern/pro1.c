#include<stdio.h>
void main()
{
	/*1.1
	    1 2
	    1 2 3
	    1 2 3 4
	    1 2 3 4 5*/
	    
	int i,j;//declared variable
	
	for(i=1; i<=5; i++)  //outer - row
	{
		for(j=1; j<=i; j++)  //inner - col
		{
			printf("%d ",j);//printing a message are using printf function.
		}
		printf("\n");//printing a message are using printf function.
	}
}
