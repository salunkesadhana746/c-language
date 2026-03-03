#include<stdio.h>
void main()
{
	//8.wap to print sum 1 to n using do..while loop.
	
	int i=1,num,sum=0;
	
	printf("Enter a number :");
	scanf("%d",&num);
	
	do
	{
		 sum += i;
		 i++;
	}
	while(i<=num);
	printf("%d = %d ",num,sum);
	
	
}
