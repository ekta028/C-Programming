//Accept character from user.If character is small display its corresponding capital cahracters,and if it small then display its corresponding capital.In other cases display as it is.

//Input : Q		Output : q
//Input : q		Output : Q
//Input : %		Output : %


#include<stdio.h>

void Display(char ch)
{
	if(ch >= 'A' && ch <= 'Z')
	{
		printf("%c",ch + 32);
	}
	else
	if(ch >= 'a' && ch <= 'z')
	{
		printf("%c",ch - 32);
	}
	else
	{
		printf("%c",ch);
	}
}

int main()
{
	char cValue = '\0';
	
	printf("Enter the character :");
	scanf("%c",&cValue);
	
	Display(cValue);
	
	return 0;
}