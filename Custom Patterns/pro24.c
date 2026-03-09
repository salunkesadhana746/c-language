#include<stdio.h>
void main()
{
	/*24.   * * * *
           *
	       *
 		   	 * * *
        	   	   *
               	   *
            * * * *		*/
            
	int i,j;
	
	for(i=1; i<=7; i++)		//outer loop - control rows
    {
    	for(j=1; j<=5; j++)		//inner loop - control columns
    	{
    		if((i==1 || i==7) && (j>1 && j<=5))	//conditions 
    		{
    			printf(" *");
			}
			else if (j==1 && (i>1 && i<4) )
			{
				printf("*  ");
			}
			else if(i==4 && (j>1 && j<5))
			{
				printf(" * ");
			}
			else if (j==5 && (i>4 && i<7) )
			{
				printf("        * ");
			}
		}
    	printf("\n");	
	}			
}
