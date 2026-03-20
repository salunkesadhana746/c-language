#include<stdio.h>
void main()
{
	//Q.1  Negative Elements in 1D Array
	// Develop a program that finds all the negative elements from a given 1D Array.
	
	int n,i;
	
	printf("Enter size of an Array :");
	scanf("%d",&n);
	
	int nums[n];
	
	for(i=0; i<n; i++)
	{
		printf("Enter nums[%d]",i);
		scanf("%d",&nums[i]);
	}
	
	printf("\nNegative Elements in 1D Array\n");
	
	for(i=0; i<n; i++)
	{
		if(nums[i]<0)
		{
			printf("%d ",nums[i]);
		}
	}

}
