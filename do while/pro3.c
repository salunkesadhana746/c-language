#include<stdio.h>
void main()
{
	// 3. wap to print 1 to n using do..while.
	
	int i=1,n;//declare variable
	
	printf("Enter n :");
	scanf("%d",&n);//user input are use to scanf function.
	do//exit control loop
	{
		printf("%d\n",i);//printing a message
		i++;//i increment
	}
	while(i<=n);// a using while to start conditions
}



