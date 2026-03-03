#include<stdio.h>
void main()
{
 	 // 6. wap to print even no.from n to 1 using do..while loop.
	
	int n;//declare variable

	printf("Enter n :");
	scanf("%d",&n);//user input are use to scanf function.
	
	do
	{
		if(n%2==0)
		{
			printf("%d ",n);
		}
		n--;
	}
	while(n>=1);
}
