#include<stdio.h>
void main()
{
	/*12.	      *
	            * *
	          * * *
            * * * *
          * * * * *		*/
          
     int i,j,k;	//declared variable
     
     for(i=1; i<=5; i++)	//outer loop - control rows
     {
     	for(k=i; k<=4; k++)	// inner loop - control columns
     	{
     		printf("  "); //printf function print a space
        }
     	for(j=1; j<=i; j++)	// inner loop - control columns
     	{
     		printf("* ");//printf function print a *
        }
        printf("\n");//printf function print a create a new line
	 }
}
