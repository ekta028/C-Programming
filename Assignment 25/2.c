//Write a program which accept string from user and accept one character.Return frequency of that character.

//Input : "Marvellous Multi OS"		char = M		Output : 2


#include<stdio.h>

int CountChar(char str[],char ch)
{
	int iCnt = 0;
	
	while(*str != '\0')
	{
		if(*str == ch)
		{
			iCnt++;
		}
		str++;
	}
	return iCnt;
}

int main()
{
	char arr[20];
	char cValue = '\0';
	int iRet = 0;
	
	printf("Enter string :");
	scanf("%[^'\n']s",arr);
	
	printf("Enter character :");
	scanf(" %c",&cValue);
	//printf("%d",cValue);
	
	iRet = CountChar(arr,cValue);
	
	printf("Frequecy of %c in %s is %d",cValue,arr,iRet);
	
	return 0;
}