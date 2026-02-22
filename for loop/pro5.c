#include<stdio.h>
void main()
{
	//5.wap to print odd nomber from 1 to n using for loop.
	
	int i,n;//declared variable.
	
	printf("Enter n :");
	scanf("%d",&n);
	
	//for loop is entry control loop
	for(i=1; i<=n; i++)//loop from i lessthan equal to n
	{
		if(i%2==1)
		{
			printf("%d ",i);
		}
	}
}
