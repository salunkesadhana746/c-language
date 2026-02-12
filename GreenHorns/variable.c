#include<stdio.h>

void main()
{
	//1. Write C Program to perform a swapping of two variables without using third variable.
	
	int a,b;
	
	printf("Enter a :");
	scanf("%d",&a);
	printf("Enter b :");
	scanf("%d",&b);
	
	a = a + b;
	b = a - b;
	a = a - b;
	
	printf("a = %d\n",a);
	printf("b = %d",b);
	
}
