//Write a program which displays ASCII table.Table contains symbol,Decimal,Hexadecimal and Octal representation of every member from 0 to 255.


#include<stdio.h>

void DisplayASCII()
{
	int i = 0;
	
	printf("	ASCII TABLE				\n");
	printf("====================================\n");
	printf("DEC	Hex	Char\n");
	for(i = 0 ; i <= 255 ; i++)
	{
		printf("%d\t%x\t%c\n",i,i,i);
	}
}

int main()
{
	DisplayASCII();
	
	return 0;
}
	