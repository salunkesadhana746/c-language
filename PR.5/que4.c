#include<stdio.h>
void main()
{
	//4. sum of elements in row & column of 2D Array
	//Develop a program to print and find the sum of all elements of 
	//a given row & column from a 2Darray
	
	int r,c,i,j,r1,c1,sum=0;
	
	printf("Enter size of rows :");
	scanf("%d",&r);
	printf("Enter size of cols :");
	scanf("%d",&c);
	printf("\n");
	
	int n[r][c];
	
	for(i=0; i<r; i++)
	{
		for(j=0; j<c; j++)
		{
			printf("Enter n[%d][%d]",i,j);
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
	
	printf("\n");
	
	printf("Enter row count for sum :");
	scanf("%d",&r1);
	
	for(i=0; i<c; i++)
	{
		printf("%d ",n[r1][i]);
		sum = sum + n[r1][i];
	}
	printf("\nsum of %d row is : %d\n\n",r1,sum);
	
	printf("\n");
	
	sum=0;
	
	printf("Enter column count for sum :");
	scanf("%d",&c1);
	
	for(i=0; i<r; i++)
	{
		printf("%d ",n[i][c1]);
		sum = sum + n[i][c1];
	}
	printf("\nsum of %d column is : %d\n\n",c1,sum);
}
