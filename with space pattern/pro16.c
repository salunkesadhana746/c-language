#include<stdio.h>
void main()
{
	/*16. A B C D E
            B C D E
              C D E
                D E
                  E  */
                  
     char i,j,k;	//declared variable
     
     for(i='A'; i<='E'; i++)	//outer  loop - control rows
     {
     	for(k='A'; k<i; k++)	// inner loop - control columns
     	{
     		printf("  "); //printf function print a space 
        }
     	for(j=i; j<='E'; j++)	// inner loop - control columns
     	{
     		printf("%c ",j);//printf function print a message
	    }
		 printf("\n");//printf function print a create a new line
	 }
}
