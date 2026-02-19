#include<stdio.h>
void main()
{
	//6. wap to print even no. from 1 to n using while loop.
	
	int n;
	printf("Enter n :");
	scanf("%d",&n);
	
	while(n>=1)
	{
		if(n%2==0)
		{
			printf("%d, ",n);
		}
		n--;
		
	}
}
