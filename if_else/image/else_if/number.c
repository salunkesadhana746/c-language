#include<stdio.h>

void main()
{
	//wap to check number is negative,positive or neutral by using ladder.
	
	int num;
	printf("Enter a number : ");
	scanf("%d",&num);
	
	if(num>0)
	{
		printf("number is positive ");
	}
	else if(num==0)
	{
		printf("number is neutral ");
	}
	else
	{
		printf("number is negative ");
	}
}
