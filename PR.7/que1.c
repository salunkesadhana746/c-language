#include<stdio.h>

//1.Calculator 
//Develop a menu-driven program to implement arithmetic operations such as +,-,*,/,and %
//using UDF, switch case, and looping. Make sure that the program is endless until a certain 
//letter is pressed.

void addition(int a, int b)
{
	printf("\nAddition of %d & %d = %d\n",a,b,a+b);
}

void substraction(int a, int b)
{
	printf("\nSubstraction of %d & %d = %d\n",a,b,a-b);
}

void multiplication(int a, int b)
{
	printf("\nMultiplication of %d & %d = %d\n",a,b,a*b);
}

void division(int a, int b)
{
	if(a!=0)
	{
		printf("\nDivision of %d & %d = %d\n",a,b,a/b);
	}
	else
	{
		printf("Error...not divide in 0 !\n");
	}
}

void module(int a, int b)
{
	if(a!=0)
	{
		printf("\nModule of %d & %d = %d\n",a,b,a%b);
	}
	else
	{
		printf("Error...can't module find in 0 !\n");
	}
}


int main()
{
	int choice=-1;
	int n1,n2;
	
	while(choice)
	{
		printf("\npress 1 for +");
		printf("\npress 2 for -");
		printf("\npress 3 for *");
		printf("\npress 4 for /");
		printf("\npress 5 for %% ");
		printf("\nPress 0 for Exit");
		printf("\n\n");
		
		printf("Enter your chioce :");
		scanf("%d",&choice);
		
		if(choice>=1 && choice<=5)
		{
			printf("\n");
			printf("Enter first num :");
			scanf("%d",&n1);
			printf("Enter second num :");
			scanf("%d",&n2);
			
			switch(choice)
			{
				case 1:
				addition(n1, n2);
				break;
				case 2:
				substraction(n1, n2);
				break;
				case 3:
				multiplication(n1, n2);
				break;
				case 4:
				division(n1, n2);
				break;
				case 5:
				module(n1, n2);
				break;	
			}
		}
		else
		{
			if (choice == 0)
	        {
	            printf("\nYou are Exit From Calculator.");
	            break;
	        }
		}	
	}
	return 0;
}
