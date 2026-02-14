#include<stdio.h>

void main()
{
	//2. wap to check user is eligible or not eligible .
	
	int age;
	printf("Enter your age :");
	scanf("%d",&age);
	
	if(age>=18)
	{
		if(age>=100)
		{
			printf("Enter your valid age!");
		}
		else
		{
			printf("you are eligible for vote .");
		}
	}
	else
	{
		if(age==0 || age<0)
		{
			printf("Enter your valid age!");
		}
		else
		{
			printf("you are not eligible for vote .");
		}
	}	
}
