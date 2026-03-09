#include<stdio.h>
void main()
{
	/* 15.      * * * * *
					*
					*
					*
					*
                *   *
                 *  *        */
		  
		  
    int i,j;  //declared variable
    
    for(i=1; i<=7; i++)		//outer loop - control rows
    {
    	for(j=1; j<=5; j++)		//inner loop - control columns
    	{
    		if(i==1 || j==3 )	//conditions 
    		{
    			printf("* ");
			}
			else if(i==6 && j==1)
			{
				printf("* ");
			}
			else if(i==7 && j==2)
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
