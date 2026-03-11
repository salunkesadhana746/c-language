#include<stdio.h>
void main()
{
	//4.wap to find sum of all elements of array.
	
	int n,i,sum=0;
	
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
  	      sum += nums[i];
 	  } 
 	  printf("sum = %d",sum);
}
