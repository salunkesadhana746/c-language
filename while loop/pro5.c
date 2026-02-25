#include<stdio.h>
void main()
{
	//5. wap to print odd no. from n to 1 using while loop.
	
	// star = n, end = 1;
	
	int n, i = 1;
	
	printf("Enter n : ");
	scanf("%d",&n);
	
	while(i<=n)
	{
		if(i%2==1)
		{
			printf("%d, ",i);
		}
		i++;
	}
   
	
}

