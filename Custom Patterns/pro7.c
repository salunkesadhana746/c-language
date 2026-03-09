#include<stdio.h>
void main()
{
	/* 7.   * * *
			*    *
			*    *
			* * *
			*    *
			*    *
			* * * 		*/
		  
		  
    int i,j,k;  //declared variable
    
    for(i=1; i<=7; i++)		//outer loop - control rows
    {
    	for(j=1; j<=3; j++)		//inner loop - control columns
    	{
    		if(i==1  || i==4 || i==7 || j==1 )	//conditions 
    		{
    			printf("* ");
			}
			else if((i==2 && i==4 && i==5 && i==6) || j==3)
			{
				printf(" * ");
			}
			else
			{
				printf("  ");
			}
		}
		printf("\n");
	}
}
