#include<stdio.h>
void main()
{
	//8. wap to print sum 1 to n using while loop.
	int n,i = 1,sum =0;
	
	printf("Enter n :");
	scanf("%d",&n);
	
	while(i<=n)
	{
		sum = sum + i;
		i++;
	}
	printf("sum = %d",sum);
}
