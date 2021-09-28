//Write a program which accept string from user and toggle the case.

//Input : "MarvellouS Multi OS"		Output : "mARVELLOUs mULTI os"


#include<stdio.h>

void strtoggle(char str[])
{
	int iCnt = 0;
	
	while(*str != '\0')
	{	
		if(*str >= 'A' && *str <= 'Z')
		{
			*str = *str + 32;
		}
		else
		if(*str >= 'a' && *str <= 'z')
		{
			*str = *str - 32;
		}
		str++;
	}
}

int main()
{
	char arr[20];
	int iRet = 0;
	
	printf("Enter string :");
	scanf("%[^'\n']s",arr);
	
	strtoggle(arr);
	
	printf("Modified string is :%s",arr);
	
	return 0;
}