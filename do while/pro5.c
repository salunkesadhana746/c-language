#include<stdio.h>
void main()
{
	// 5. wap to print odd no.from 1 to n using do..while loop.
	
	int i,n;//declare variable

	printf("Enter n :");
	scanf("%d",&n);//user input are use to scanf function.
	
	do
	{
		if(i%2==1)
		{
			printf("%d ",i);
		}
		i++;	
	}
	while(i<=n);
     
     
}



