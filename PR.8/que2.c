#include<stdio.h>

//2. Cubes Generator
// Develop a program to find cubes of all elements from a given 2D array using pointer and UDF.

void cube(int *ptr, int rows, int cols)
{
	int i,j,n;
	
	for (i = 0; i < rows; i++)
    {
        for (j = 0; j < cols; j++)
        {
            n = *ptr;
            printf("\ncube of arr[%d][%d] = %d\n",i,j,n*n*n);
            ptr++;
        }
    }	
}

void main()
{
	int rows,cols;
	
	printf("Enter sizes of rows :");
	scanf("%d",&rows);
	printf("Enter sizes of rows :");
	scanf("%d",&cols);
	
	printf("\n");
	
	printf("Enter array elements:\n\n");
	
	int a[rows][cols];
	
	int i,j;
	
	for (i = 0; i < rows; i++)
    {
        for (j = 0; j < cols; j++)
        {
            printf("a[%d][%d] = ", i, j);
            scanf("%d", &a[i][j]);
        }
       	printf("\n");
    }
	
	printf("Cube of all elements :\n\n");
	cube(&a,rows,cols);		
}

