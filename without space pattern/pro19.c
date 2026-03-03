#include<stdio.h>
void main()
{
	/*19. 	1
			2 3
			4 5 6
			7 8 9 10
			11 12 13 14 15	*/
			
	int i,j,k=1;//declared variable
	
	for(i=1; i<=5; i++)//i=5 5<=5 :true
	{
		for(j=1; j<=i; j++)//j=5 5<=5 :true
		{
			printf("%d ",k);//printing a message are using printf function.
			k++;
		}
		printf("\n");//printing a message are using printf function.
	}
}
