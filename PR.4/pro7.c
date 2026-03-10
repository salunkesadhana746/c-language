#include<stdio.h>
void main()
{
	/*7. Develop a program that prints the given Custom alphabetic pattern using a nested for loop.
	
	* * * *
	*       *
	*       *
	* * * *
	*
	*
	*               */
	
	
	int i,j;
	
	for(i=1; i<=7; i++)
	{
		for(j=1; j<=4; j++)
		{
			if(i==1 || i==4 || j==1)
			{
				printf("* ");
			}
			else if(j==4 && (i>1 && i<4))
			{
				printf("   * ");
			}
			else
			{
				printf(" ");
			}
		}
		printf("\n");
	}
	
	
}
