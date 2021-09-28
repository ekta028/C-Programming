//Write a program which accept string from user and accept one character.Check whether that character is present in string or not.

//Input : "Marvellous Multi OS"		char = e		Output : Character Present in String
//Input : "Marvellous Multi OS"		char = y		Output : Character not Present in String


#include<stdio.h>

#define TRUE 1
#define FALSE 0

typedef int BOOL;

BOOL ChkChar(char str[],char ch)
{
	while(*str != '\0')
	{
		if(*str == ch)
		{
			break;
		}
		str++;
	}
	if(*str != 0)
	{
		return 1;
	}
	else
	{
		return 0;
	}
}

int main()
{
	char arr[20];
	char cValue;
	BOOL bRet = FALSE;
	
	printf("Enter string :");
	scanf("%[^'\n']s",arr);
	
	printf("Enter Character :");
	scanf(" %c",&cValue);
	
	bRet = ChkChar(arr,cValue);
	
	if(bRet == TRUE)
	{
		printf("%c character present in String %s",cValue,arr);
	}
	else
	{
		printf("%c character not present in String %s",cValue,arr);
	}
	
	return 0;
}