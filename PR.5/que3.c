#include<stdio.h>
void main()
{
	//3. Transpose of 2D Array
	//Develop a program that finds the transpose matrix of a given 2D Array.
	
	int r,c,i,j;
	
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
			printf("%d ",n[j][i]); 
		}
		printf("\n");
	}
	

}
