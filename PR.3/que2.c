#include<stdio.h>
void main()
{
	//2. develop a program to count the total number of digits in a number.
	
	int num, count=0;//declared variable
	
	printf("Enter a Number :");//752
	scanf("%d",&num);
	
	while(num>0)//752>0:true,75>0:true,7>0:true,
	{
		num = num / 10;// 75,7,0
		count++;//1,2,3;
	}
	printf("Total number of digits : %d",count);
	
}
