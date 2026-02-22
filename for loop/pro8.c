#include<stdio.h>
void main()
{
	//8.wap to print sum 1 to n using for loop.
	
	int i,n,sum=0;//declared variable.
	
	printf("Enter n :");
	scanf("%d",&n);
	
	//for loop is entry control loop
	for(i=1; i<=n; i++)//loop from i lessthan equal to n
	{
		sum +=i;
	}
	printf("%d = %d ",n,sum);

}

