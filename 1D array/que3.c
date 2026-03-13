#include<stdio.h>
void main()
{
	//3. Write a Program to find the average of a 1D array.
	
	int n,i,sum=0;
	float average ;
	
	printf("Enter size of an Array :");
	scanf("%d",&n);
	
	int nums[n];
	
	for(i=0; i<n; i++)
	{
		printf("Enter nums[%d]",i);
		scanf("%d",&nums[i]);
	}
	
	for(i=0; i<n; i++)
	{
		sum += nums[i];
	}

	
	average = sum / n ;
	
	printf("Average of an Array: %.2f ",average);
	
	
}
