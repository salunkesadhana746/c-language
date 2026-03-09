#include<stdio.h>
void main()
{
	/*12.    * * *
           *       *
  		   *
		   *    * * *
 		   *        *
		   *        *
			 *  *  *		*/
			 
    int i,j;  //declared variable
    
    for(i=1; i<=7; i++)		//outer loop - control rows
    {
    	for(j=1; j<=5; j++)		//inner loop - control columns
    	{
    		if((i==1 || i==7) && (j>1 && j<5))	//conditions 
    		{
    			printf("* ");
			}
			else if(j==1 && (i>1 && i<7))
			{
				printf("* ");
			}
			else if(i==4 && j>2)
			{
				printf("* ");
			}
			else if(j==5 && (i==2 || i==5 || i==6))
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
