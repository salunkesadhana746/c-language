#include<stdio.h>

//3. print cube of n using function.

void cube(int n)
{
	printf("cube of num : %d",n*n*n);
}
void main()
{
	int n;
	printf("Enter cube num :");
	scanf("%d",&n);
	cube(n);
}
