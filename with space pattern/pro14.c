#include<stdio.h>
void main()
{
	/*14.        A
               A B
             A B C
           A B C D
         A B C D E		*/
         
     char i,j,k;  //declared variable 
     
     for(i='A'; i<='E'; i++)	//outer loop - control rows
     {
     	for(k=i; k<'E'; k++)		// inner loop - control columns
     	{
     		printf("  ");	//printf function print a space 
		 }
     	for(j='A'; j<=i; j++)	// inner loop - control columns
     	{
     		printf("%c ",j);	//printf function print a message
        }
        printf("\n");	//printf function print a create a new line
	 }
}
