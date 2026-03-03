#include<stdio.h>
void main()
{
	/*21.   A
			A B
			A B C
			A B C D
			A B C D E	*/
			
	char i,j;	//declared variable
	
	for(i='A'; i<='E'; i++) // i=E E<=E : true
	{
		for(j='A'; j<=i; j++)		//j=E E<=E : true
		{
			printf("%c ",j);//printing a message are using printf function.
		}
		printf("\n");//printing a message are using printf function.
	}
}
