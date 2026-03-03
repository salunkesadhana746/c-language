#include<stdio.h>
void main()
{
	/*22.	A
			B C
			D E F
			G H I J
			K L M N O	*/
			
	char i,j, k='A';		//declared variable
	
	for(i='A'; i<='E'; i++) // i='E' E<=E : true
	{
		for(j='A'; j<=i; j++)		//j=E E<=E: true
		{
			printf("%c ",k);
			k++;//printing a message are using printf function.
		}
		printf("\n");//printing a message are using printf function.
	}
}
