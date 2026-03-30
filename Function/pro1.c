#include<stdio.h>

// 1. print multiplication table of n. using function.

void table(int n)
{
	int i;
	for(i=1; i<=10; i++)
	{
	printf("%d * %d = %d\n",n,i,n*i);	
	}
	
}


void main()
{
	int n;
	printf("Enter of table num:");
	scanf("%d",&n);	
	table(n);
}
