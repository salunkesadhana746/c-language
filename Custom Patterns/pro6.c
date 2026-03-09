#include<stdio.h>
void main()
{
	/* 6.   * * * * *
			*       *
			* * * * *
			*       *
			*       *
			*       *
			*       *   */
		  
		  
    int i,j,k;  //declared variable
    
    for(i=1; i<=7; i++)		//outer loop - control rows
    {
    	for(j=1; j<=5; j++)		//inner loop - control columns
    	{
    		if(i==1 || i==3 || j==1 || j==5)	//conditions 
    		{
    			printf("* ");
			}
			else
			{
				printf("  ");
			}
		}
		printf("\n");
	}
}
