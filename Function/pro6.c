#include<stdio.h>

//6. wap to print 1 to 10 using recursion/without using loop.

void print10(int i)
{
	printf("%d\n",i);
	if(i<10)
	{
		i++;
		print10(i);
	}
}

void main()
{
	print10(1);
}
