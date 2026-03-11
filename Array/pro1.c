#include<stdio.h>
void main()
{
	//1. wap to create an array by user define size and input and display whole array.
	
	int n,i;
	
	printf("Enter size of Array :");
	scanf("%d",&n);
	
	int a[n];
	
	for(i=0; i<n; i++)
	{
		printf("Enter a[%d] :",i);
		scanf("%d",&a[i]);
	}
	
	printf("\n");
	for(i=0; i<n; i++)
	{
		printf("%d ",a[i]);
	}
}
