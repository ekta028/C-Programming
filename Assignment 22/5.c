//Accept chracter from user and display its ASCII value in decimal,octal and hexadecimal format.

//Input : A		Output : Decimal : 65		Octal : 0101		Hexadecimal : 0X41

#include<stdio.h>

void Display(char ch)
{
	printf("Dec	Oct	Hex\n");
	printf("%d\t%o\t%x\n",ch,ch,ch);
}

int main()
{
	char cValue = '\0';
	
	printf("Enter the character :");
	scanf("%c",&cValue);
	
	Display(cValue);
	
	return 0;
}
	