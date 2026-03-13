#include<stdio.h>
void main()
{
	//4. WAP to print the multiplication table of each array element.
	
	int n,i;
	
	printf("Enter size of an array : ");
	scanf("%d",&n);
	
	printf("\n");
	
	for(i=1; i<=10; i++)
	{
		printf("%d * %d = %d\n",n,i,n*i);
	}
	
	
}
