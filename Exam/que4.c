#include<stdio.h>

void main()
{
	/*4.Write a C program that uses pointers to find the sum of two 1D arrays.*/
	
	int n,i,sum=0;
	
	
	printf("Enter a size of array :");
	scanf("%d",&n);
	
	printf("\n");
	
	int a[n], b[n];
	
	for(i=0; i<n; i++)
	{
		printf("Enter a[%d]",i);
		scanf("%d",&a[i]);
	}
	printf("\n");
	for(i=0; i<n; i++)
	{
		printf("Enter b[%d]",i);
		scanf("%d",&b[i]);
	}
	
	printf("\n");
	
	for(i=0; i<n; i++)
	{
		printf("%d ",a[i]);
	}
	printf("\n");
	
	for(i=0; i<n; i++)
	{
		printf("%d ",b[i]);
	}
	
	printf("\n");
	
	sum = a[i]+ b[i];
	
	printf("\n");
	
	printf("sum of %d",sum);
}
