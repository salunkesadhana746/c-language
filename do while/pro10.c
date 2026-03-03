#include<stdio.h>
void main()
{
	//10.wap to print thr multiplication table of n using do..while loop.
	
	int i=1,n;
	
	printf("Enter a number :");
	scanf("%d",&n);
	
	do
	{
		printf("%d * %d = %d\n",n,i,n*i);
		i++;
	}
	while(i<=10);
}
