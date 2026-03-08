#include<stdio.h>
void main()
{
	/*11. * * * * *
   		  	* * * *
			  * * *
			  	* *
				  *		*/
				  
    
    int i,j,k;  //declared variable
    
    for(i=5; i>=1; i--)  //outer loop - control rows
    {
    	for(k=i; k<=4; k++)  //inner loop - control col
    	{
    		printf("  ");  //printf function print a space.
		}
    	for(j=i; j>=1; j--) //inner loop - control col
    	{
    		printf("* ");  //printf function print a *
		}
		printf("\n"); //create a new line
	}
}
