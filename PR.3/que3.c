#include<stdio.h>
void main()
{
	//3.develop a program to find the sum of a numbers first and last digits.
	//3
	
	int num,sum=0;//declared variable
	
	printf("Enter a number :");
	scanf("%d",&num);
	
	int ld = num % 10;//last num to module 10 is queal to id(last num) 

		
	while(num>9)
	{
	 	num = num / 10;	//num to divit 10 is queal to first numbre 																																																																																																																																																																																																																																																														
	 
	}
		sum = num + ld;// first and last digits + to queal sum 
	printf("Total number of first and last digits : %d",sum);//printing a message
}

