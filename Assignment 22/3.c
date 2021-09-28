//Accept character from user.If it is capital then display all the characters from the input character till Z.If input character is small then print all the characters in reverse order till a.In other casesreturn directly.

//Input : Q		Output : Q R S T U V W X Y Z
//Input : q		Output : q p o n m l k j i h g f e d c b a


#include<stdio.h>

void Display(char ch)
{
	char c = '\0';
	
	if(ch >= 'A' && ch <= 'Z')
	for(c = ch ; c <= 'Z' ; c++)
	{
		printf("%c\t",c);
	}
	else
	if(ch >= 'a' && ch <= 'z')
	for(c = ch ; c >= 'a' ; c--)
	{
		printf("%c\t",c);
	}
	else
	{
		return;
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