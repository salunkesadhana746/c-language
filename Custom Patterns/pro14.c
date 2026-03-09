#include<stdio.h>
void main()
{
	/* 14.      * * * * *
					*
					*
					*
					*
					*
			 	* * * * *    */
		  
		  
    int i,j;  //declared variable
    
    for(i=1; i<=7; i++)		//outer loop - control rows
    {
    	for(j=1; j<=5; j++)		//inner loop - control columns
    	{
    		if(i==1 || i==7 || j==3)	//conditions 
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
