#include<stdio.h>
void main()
{
	//6.wap to print even number n to 1 using for loop.
	
	int i, n;//declared variable.
	
	printf("Enter n :");
	scanf("%d",&n);
	
	//for loop is entry control loop
	for(i=n; i>=1; i--)//loop from i greater than equal to 1
	{
		if(i%2==0)
		{
			printf("%d ",i);
		}
	}
}
