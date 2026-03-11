#include<stdio.h>
void main()
{
	//3. wap to print only even elements of array.
	
	int n,i;
	
	printf("Enter size of an array :");
	scanf("%d",&n);
	
	int nums[n];
	
	for(i=0; i<n; i++)
	{
		printf("Enter nums[%d] :",i);
		scanf("%d",&nums[i]);
	}
	printf("\n");
	
	for(i=0; i<n; i++)
	{
		if(nums[i]%2==0)
		{
			printf("%d ",nums[i]);
		}
	}
	
	
}
