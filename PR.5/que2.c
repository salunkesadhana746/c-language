#include<stdio.h>
void main()
{
	//Q.2 Largest Element in 2D Array 
	// Develop a program that finds all the lergest element from a given 2D Array.
	
	int r,c,i,j,largest;
	
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
			largest = r*c;
		}
	}
	printf("The largest element :%d",largest);
}
