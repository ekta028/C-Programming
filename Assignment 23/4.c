//Write a program which accept string from user and check whether it contains vowels in it or not.

//Input : "marvellous"		Output : TRUE
//Input : "xyz"				Output : FALSE


#include<stdio.h>

#define TRUE 1
#define FALSE 0

typedef int BOOL;

BOOL ChkVowel(char str[])
{
	int iCnt = 0;

	while(*str != '\0')
	{
		if(*str == 'a' || *str == 'e' || *str == 'i' || *str == 'o' || *str == 'u' || *str == 'A'
		|| *str == 'E' || *str == 'I' || *str == 'O' || *str == 'U')
		{
			iCnt++;
			break;
		}
		str++;
	}
	if(iCnt == 1)
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
	BOOL bRet  = 0;
	
	printf("Enter String:");
	scanf("%[^'\n']s",arr);
	
	bRet = ChkVowel(arr);
	
	if(bRet == TRUE)
	{
		printf("TRUE");
	}
	else
	{
		printf("FALSE");
	}
}