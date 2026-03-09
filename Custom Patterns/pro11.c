#include<stdio.h>
void main()
{
	/* 11.       * * * *
				*
				*
				* * * *
				*
				*
				*          */
		  
		  
    int i,j;  //declared variable
    
    for(i=1; i<=7; i++)		//outer loop - control rows
    {
    	for(j=1; j<=4; j++)		//inner loop - control columns
    	{
    		if(i==1 || i==4 || j==1)	//conditions 
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
