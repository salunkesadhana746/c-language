#include<stdio.h>
void main()
{
	//5.wap swap without using third variable.
	
	int a = 10,b = 20;
	printf("before swapping :a =%d,b = %d\n",a,b);
	
	a = a+b;
	b = a-b;
    a = a-b;
	
	printf("after swapping : a = %d,b = %d\n ",a,b);
	
}
