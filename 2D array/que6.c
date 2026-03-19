#include<stdio.h>
void main()
{
	//6.WAP to perform diagonal and anti diagonal sum of 2D array.
	
	int i,j,n,sum=0;
	
	printf("Enter size of rows and cols :");
	scanf("%d",&n);

	
	printf("\n");
	
	int a[n][n];
	
	for(i=0; i<n; i++)
	{
		for(j=0; j<n; j++)
		{
			printf("Enter a[%d][%d] :",i,j);
			scanf("%d",&a[i][j]);
		}
		printf("\n");
	}
	
	for(i=0; i<n; i++)
	{
		for(j=0; j<n; j++)
		{
			printf("%d ",a[i][j]);	
		}
		printf("\n");
	}
	
	for(i=0; i<n; i++)
	{
		sum = sum + a[i][i];
	}
	printf("sum of diagonal = %d\n",sum);
	
	printf("\n");
	
	sum = 0;
	
	for(i=0,j=n-1; i<n,j>=0; i++,j--)
	{
		sum = sum + a[i][j];
		
	}
	printf("sum of anti diagonal = %d",sum);
	
	
}
