#include<stdio.h>
void main()
{
	//9. wap to calculate the factorial of n using while loop.
	
	int n, i=1,factorial = 1;
	
	printf("Enter n :");
	scanf("%d",&n);
	
	while(i<=n)
	{
		factorial = factorial * i;
		i++;
	}
	printf("factorial = %d",factorial);
}
