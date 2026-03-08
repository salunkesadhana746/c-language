#include<stdio.h>
void main()
{
	/*13.		    A
                  B A
                C B A
              D C B A
            E D C B A 	*/
            
	char i,j,k; //declared variable
	
	for(i='A'; i<='E'; i++)	// outer loop - control rows 
	{
		for(k='E'; k>i; k--) // inner loop - control columns
		{
			printf("  "); //printf function print a space 
		}
		for(j=i; j>='A'; j--) //inner loop - control columns
		{
			printf("%c ",j);	//printf function print a message
		}
		printf("\n");  //printf function print a create a new line
	}
}
