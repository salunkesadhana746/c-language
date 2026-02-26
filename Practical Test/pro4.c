#include<stdio.h>
void main()
{
	//4.wap to print only odd numbers from n to 1 using for loop .
	
	int n, i ;//declared variable
	
	printf("Enter n :");//printing a message to printf function.
	scanf("%d",&n);//user input are use to scanf function.
	
	for(i=n; i>=1; i--)//i greater than qeual to 1
	{
		if(i%2==1)//i module 2 qeuale to 1
		{
			printf("%d ",i);//printing a message to printf function.
			
		}
	}
	
}
