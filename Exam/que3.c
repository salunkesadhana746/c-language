#include<stdio.h>

/*3.Create a C program that defines a function to check if a given number is divisible by 3 and 5 both or not.*/


void check(int n)
{
	int i;
	
	if(n%3==0 && n%5==0)
	{
		printf("\nnumber is divisible by 3 and 5 both");
	}
	else if(n%3 == 0)
	{
		printf("\nnumber is divisible by 3");
	}
	
	else if(n%5 == 0)
		{
			printf("\nnumber is divisible by 5");
		}
		else
		{
			printf("number is not divisible by 3 and 5.");
		}
	
   
}

void main()
{
	int num;
	
	printf("Enter a num :");
	scanf("%d",&num);
	
	check(num);
}

