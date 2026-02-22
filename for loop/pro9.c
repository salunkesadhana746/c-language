#include<stdio.h>
void main()
{
	//wap to calculate the factorial of n. using for loop.
	
	int n,i,fact;//declared variable.
	
	printf("Enter n :");
	scanf("%d",&n);
	
	//for loop is entry control loop
	for(i=fact; i<=n; i++)//loop from i lessthan equal to n
	{
		fact*=i;
	}
	printf("%d = %d",n,fact);
}
