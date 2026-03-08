#include<stdio.h>
void main()
{
	 /*15. A B C D E
  	   	     A B C D
               A B C
	             A B
				   A	  */
				   
    
    char i,j,k; //declared variable
    
    for(i='E'; i>='A'; i--)  //outer loop - control rows
    {
    	for(k='E'; k>i; k--)  // inner loop - control columns
    	{
    		printf("  ");   //printf function print a space 
		}
    	for(j='A'; j<=i; j++)  // inner loop - control columns
    	{
    		printf("%c ",j);	//printf function print a message
		}
		printf("\n");	//printf function print a create a new line
	}

}
