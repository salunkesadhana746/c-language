#include<stdio.h>
void main()
{
	/* 9.   *   *
			*     *
			*      *
			*       *
			*      *  
			*     *
			*   *        */
		  
		  
    int i,j;  //declared variable
    
    for(i=1; i<=7; i++)		//outer loop - control rows
    {
    	for(j=1; j<=5; j++)		//inner loop - control columns
    	{
    		if(j==1)
    		{
    			printf("* ");
			}
			else if((i==1 || i==7) && j==2)
			{
				printf(" * ");
			}
			else if((i==2 || i==6) && j==3)
			{
				printf("  * ");
			}
			else if((i==3 || i==5) && j==4)
			{
				printf("  * ");
			}
			else if(i==4 && j==5)
			{
				printf(" * ");
			}
			else
			{
				printf(" ");
			}
		}
    printf("\n");		
	}
}
