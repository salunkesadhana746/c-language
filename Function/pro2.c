#include<stdio.h>

//2. print sum of two numbers using function

void sum(int a, int b)
{
	printf("\n");
	printf("sum of numbers = %d\n",a+b);	
}

void main()
{
	int n1,n2;
	printf("Enter n1 :");
	scanf("%d",&n1);
	printf("Enter n2 :");
	scanf("%d",&n2);
	
	sum(n1,n2);	
}
