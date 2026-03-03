#include<stdio.h>
void main()
{
	/*22.	A
			B C
			D E F
			G H I J
			K L M N O	*/
			
	char i='A', j='E', k=1;		//declared variable
	
	for(i=1; i<=5; i++) // i=5 5<=5 : true
	{
		for(j=1; j<=i; j++)		//j=5 5<=5 : true
		{
			printf("%c ",k);//printing a message are using printf function.
		}
		printf("\n");//printing a message are using printf function.
	}
}
