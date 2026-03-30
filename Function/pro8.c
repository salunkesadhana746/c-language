#include<stdio.h>

//8. wap to print n1 to n2...

void printN(int start, int end)
{
	printf("%d\n",start);
	if(start<end)
	{
		start++;
		printN(start,end);
	}
}

void main()
{
	int n1,n2;
	
	printf("Enter n1 :");
	scanf("%d",&n1);
	printf("Enter n2 :");
	scanf("%d",&n2);
	
	printN(n1,n2);
}
