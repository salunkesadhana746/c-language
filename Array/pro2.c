#include<stdio.h>
void main()
{
	//2. wap to print array in reverse order. 
	
	int n,i;
	
	printf("Enter size of an array : ");
	scanf("%d",&n);
	
	int nums[n];
	
	for(i=0; i<n; i++)
	{
		printf("Enter nums[%d]",i);
		scanf("%d",&nums[i]);
	}
	
	printf("\n");
	for(i=n-1; i>=0; i--)
	{
		printf("%d ",nums[i]);
	}
	
	
}
