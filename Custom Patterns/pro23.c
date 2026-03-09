#include<stdio.h>
void main()
{
	/* 23.      * * *
				*    *
				*    *
				* * *
				*    *
				*     *
				*      *  */
		  
		  
    int i,j;  //declared variable
    
    for(i=1; i<=7; i++)		//outer loop - control rows
    {
    	for(j=1; j<=5; j++)		//inner loop - control columns
    	{
    		if(j==1)
    		{
    			printf("* ");
			}
			else if(i==1 && j>3)
			{
				printf("* ");
			}
			else if(i==4 && j>3)
			{
				printf("* ");
			}
			else if (j==4 && (i>1 && i<4) )
			{
				printf("   * ");
			}
			else if(i==5 && j==4)
			{
				printf("   * ");
			}
			else if(i==6 && j==5)
			{
				printf("    * ");
			}
			else if(i==7 && j==5)
			{
				printf("     * ");
			}
		}
    		
		printf("\n");
	}
}
