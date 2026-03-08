#include<stdio.h>
void main()
{
	/*18.              1
                     0 0
			       1 1 1
  	   		     0 0 0 0
			   1 1 1 1 1		*/
         
     int i,j,k;		//declared variable
     
     for(i=1; i<=5; i++)	//outer loop - control rows
     {
     	for(k=i; k<=4; k++)		//inner loop - control columns
     	{
     		printf("  ");//printf function print a space
		 }
     	for(j=1; j<=i; j++) //inner loop - control columns
     	{
     	 	if(i%2==0)	//if statement even condition
   			{
			 	printf("0 ");//printing a message are using printf function
	        }	
            else	//else statement odd condition
            {
            	printf("1 ");//printing a message are using printf function
			}	   
	    }
	    printf("\n");//printing a message are using printf function
	 }
}
