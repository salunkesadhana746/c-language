#include<stdio.h>
void main()
{
	//4.WAP to perform row-wise sum of 2D array.
	
	int r,c,i,j,sum=0;
	
	printf("Enter size of row :");
	scanf("%d",&r);
	printf("Enter size of col :");
	scanf("%d",&c);
	
	printf("\n");
	
	int n[r][c];
	
	printf("\n");
	
	for(i=0; i<r; i++)
	{
		for(j=0; j<c; j++)
		{
			printf("Enter n[%d][%d] :",i,j);
			scanf("%d",&n[i][j]);
		}
		printf("\n");
	}
	
	for(i=0; i<r; i++)
	{
		for(j=0; j<c; j++)
		{
			printf("%d ",n[i][j]);
		}
		printf("\n");
	}
	printf("\nrows wise sum\n");
	
	for(i=0; i<r; i++)
	{
		sum=0;
		
		for(j=0; j<c; j++)
		{
			sum += n[i][j];
		}
			printf("sum of row %d = %d\n",i + 1,sum);
	
	}		
}
