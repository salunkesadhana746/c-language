#include<stdio.h>

void main()
{
	//1.wap to swap two value of variable without using third variable.
	
	int a = 10, b = 20;//declared variable
	
	printf("Swap before  :\na = %d\nb = %d\n",a ,b);//printing a message to printf function.
	
	a = a + b;
	b = a - b;
	a = a - b;
	
	printf("Swap after : \na = %d\nb = %d",a,b);//printing a message to printf function.
}
