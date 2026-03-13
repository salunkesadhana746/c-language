#include<stdio.h>
void main()
{
	//5. Write a program in C to read n number of values in an array and display them in reverse order.
	
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
