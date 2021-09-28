//Write a program which accept string from user and convert it into upper case.

//Input : "Marvellous Multi OS"		Output : "MARVELLOUS MULTI OS"


#include<stdio.h>

void strupr(char str[])
{
	int iCnt = 0;
	
	while(*str != '\0')
	{	
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
	
	strupr(arr);
	
	printf("Modified string is :%s",arr);
	
	return 0;
}