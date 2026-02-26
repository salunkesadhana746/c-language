#include<stdio.h>
void main()
{
	//5.wap to find sum of first and last digit of a number.
	
	int ld,num,sum=0;//declared variable
	
	printf("Enter a number :");//printing a message to printf function.
	scanf("%d",&num);//user input are use to scanf function.
	
	ld = num % 10;
	
	while(num>9)
	{
		num = num / 10;
	}
	
	sum = num+ld;
	
	printf("sum of first and last digit is %d",sum);//printing a message to printf function.
}
