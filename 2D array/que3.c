#include<stdio.h>
void main()
{
	//3.WAP to find average of 2D array.
	
	int r,c,i,j,sum=0;
	
	printf("Enter size of row :");
	scanf("%d",&r);
	printf("Enter size of col :");
	scanf("%d",&c);
	
	printf("\n");
	
	int n[r][c];
	
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
			sum += n[i][j];
		}
	}
	
	float average;
	
	average = sum / (r*c);
	
	printf("Average of 2d array is : %.2f",average);
}
