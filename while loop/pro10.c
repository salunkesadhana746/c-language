#include<stdio.h>
void main()
{
	//10. wap to print thr multiplication table of n using while loop.
	
	int n,i;
	printf("Enter n :");
	scanf("%d",&n);
	
	while(i<=10)
	{
		printf("%d * %d = %d\n",n,i,n*i);
		i++;
	}
	
}
