#include<stdio.h>

void main()
{
	/* 12.5 5 5 5 5
		  4 4 4 4
		  3 3 3
		  2 2
		  1  	*/
		  
    int i,j;	//declared variable
    
    for(i=5; i>=1; i--) //i=1 1>=1:true
    {
    	for(j=1; j<=i; j++)	 //j=1 1<=1 : true
    	{
    		printf("%d ",i);   //printing a message are using printf function.
		}
		printf("\n");		//printing a message are using printf function.
	}
}

//5 5 5 5 5
//4 4 4 4
//3 3 3
//2 2
//1
