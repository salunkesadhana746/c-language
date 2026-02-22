#include<stdio.h>
void main()
{
	//4. wap to print n to 1 using for loop.
	
	int n,i;//declared variable.
	
	printf("Enter n :");
	scanf("%d",&n);
	
	//for loop is entry control loop
	for(i=n; i>=1; i--)//loop from i greater than equal to 1
	{
		printf("%d ",i);
	}
}
