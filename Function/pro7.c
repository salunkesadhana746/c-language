#include<stdio.h>

//7. wap to print 1 to n...

void printn(int i, int n)
{
	printf("%d\n",i);
	if(i<n)
	{
		i++;
		printn(i,n);
	}
}


void main()
{
 	int n;
	
	printf("Enter n :");
	scanf("%d",&n);
	
	printn(1,n);	
}
