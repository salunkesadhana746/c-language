#include<stdio.h>
void main()
{
	/*23.               |
				      | -
   				 	| - |
  	 			  | - | -
  	   			| - | - |		*/
         
     int i,j,k;		//declared variable
     
     for(i=5; i>=1; i--)	//outer loop - control rows
     {
     	for(k=i; k>=2; k--)		//inner loop - control columns
     	{
     		printf("  ");//printf function print a space
		 }
     	for(j=5; j>=i; j--) //inner loop - control columns
     	{
     	 	if(j%2==0)	//if statement even condition
   			{
			 	printf("- ");//printing a message are using printf function
	        }	
            else	//else statement odd condition
            {
            	printf("| ");//printing a message are using printf function
			}	   
	    }
	    printf("\n");//printing a message are using printf function
	 }
}
