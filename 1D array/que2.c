#include<stdio.h>

void main()
{
	// 2. WAP to find the sum of a 1D array.
	
	int i,n,sum=0;
	
	printf("Enter size of an array : ");
	scanf("%d",&n);
	
	int nums[n];
	
	for(i=0; i<n; i++)
	{
		printf("Enter nums[%d]",i);
		scanf("%d",&nums[i]);
	}
	
	printf("\n");
	
	for(i=0; i<n; i++)
	{
		sum += nums[i];
	}
	printf("sum = %d",sum);
	
}
