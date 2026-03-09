#include<stdio.h>
void main()
{
	/* 18.      *      *
				* *  * *
				*   *  *
				*      *
				*      *
				*      *
				*      *     */
		  
		  
    int i,j;  //declared variable
    
    for(i=1; i<=7; i++)		//outer loop - control rows
    {
    	for(j=1; j<=5; j++)		//inner loop - control columns
    	{
    		if(j==1 || j==5 )	//conditions 
    		{
    			printf("* ");
			}
			else if(i==2 && (j==2 || j==4))
			{
				printf("* ");
			}
			else if(i==3 && j==3 )
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
