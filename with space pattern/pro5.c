#include<stdio.h>
void main()
{
	/* 5.         1
                2 2
              3 3 3
            4 4 4 4
          5 5 5 5 5     */
          
     
     int i,j,k;//declared variable
     
     for(i=1; i<=5; i++)//all condition are true then print functions message.
     {
     	for(k=i; k<=4; k++)//all condition are true then print functions message.
     	{
     		printf("  ");//printing a message are using printf function.
		 }
     	for(j=1; j<=i; j++)//all condition are true then print functions message.
     	{
     		printf("%d ",i);//printing a message are using printf function.
		 }
		 printf("\n");//printing a message are using printf function.
	 }
}
