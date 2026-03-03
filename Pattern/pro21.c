#include<stdio.h>
void main()
{
	/*21.   A
			A B
			A B C
			A B C D
			A B C D E	*/
			
	char i='A',j='E';	//declared variable
	
	for(i=1; i<=5; i++) // i=5 5<=5 : true
	{
		for(j=1; j<=i; j++)		//j=5 5<=5 : true
		{
			printf("%c ",'A' + j - 1);//printing a message are using printf function.
		}
		printf("\n");//printing a message are using printf function.
	}
}
