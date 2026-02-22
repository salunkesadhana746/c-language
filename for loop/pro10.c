#include<stdio.h>
void main()
{
	// 10.wap to print thr multiplication table of n using for loop.
	
	int i,n;//declared variable.
	
	printf("Enter n :");
	scanf("%d",&n);
	
	//for loop is entry control loop
	for(i=1; i<=10; i++)//loop from i lessthan equal to 10
	{
		printf("%d * %d = %d\n",n,i,n*i);
	}
}
