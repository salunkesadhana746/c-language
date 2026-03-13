#include<stdio.h>
void main()
{
	// 1. Write a Program to find the length of a 1D array.

	int n,i;
	
	printf("Enter size of an Array : ");
	scanf("%d",&n);
	
	printf("\n");
	
	int nums[n];
	
	for(i=0; i<n; i++)
	{
		printf("Enter nums[%d] :",i);
		scanf("%d",&nums[i]);
	}
	printf("\n");
	
	printf("Length of an Array: %d ",n);
}
