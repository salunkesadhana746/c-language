#include<stdio.h>
void main()
{
	//9.wap to calculate the factorial of n. using do..while loop.
	
	int i,n,fact;
	
	printf("Enter n :");
	scanf("%d",&n);
	i=fact;
	do
	{
		fact *= i;
		i++;
	}
	while(i<=n);
	printf("%d = %d ",n,fact);
}
