#include<stdio.h>
void main()
{
	/*22.    * * *
			*     *
			*     *
			*     *
			*  *  *
			*   * *
			 * * *  	
			       *
			 */
			 
    int i,j;  //declared variable
    
    for(i=1; i<=8; i++)		//outer loop - control rows
    {
    	for(j=1; j<=6; j++)		//inner loop - control columns
    	{
    		if((i==1 || i==7) && (j>1 && j<5))	//conditions 
    		{
    			printf("* ");
			}
			else if(j==1 && (i>1 && i<7))
			{
				printf("* ");
			}
			else if(j==5 && (i>1 && i<6))
			{
				printf("* ");
			}
			else if(i==6 && j==5 )
			{
				printf("* ");
			}
			else if(i==5 && j==4 )
			{
				printf("* ");
			}
			else if(i==7 && j==6)
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
