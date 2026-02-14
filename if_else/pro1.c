#include<stdio.h>

void main()
{
	//1.wap to check number is negative,positive,neutral.
	
	int num;
	printf("Enter a num :");
	scanf("%d",&num);
	
	if(num>=0)
	{
		if(num==0)
		{
			printf("number is neutral");
		}
		else
		{
			printf("number is positive");
		}
	}
	else
	{
		printf("number is negative");	
	}	 
}
