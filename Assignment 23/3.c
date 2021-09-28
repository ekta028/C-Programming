//Write a program which accept string from user and return difference between frequency of small characters and frequency of capital characters.

//Input : "Marvellous"		Output : -8(1-9)


#include<stdio.h>

int Difference(char str[])
{
	int iCCnt = 0 , iSCnt = 0;
	
	while(*str != '\0')
	{
		if(*str >= 'A' && *str <= 'Z')
		{
			iCCnt++;
		}
		else
		if(*str >= 'a' && *str <= 'z')
		{
			iSCnt++;
		}
		str++;
	}
	return iCCnt - iSCnt;
}

int main()
{
	char arr[20];
	int iRet = 0;
	
	printf("Enter string :");
	scanf("%[^'\n']s",arr);
	
	iRet = Difference(arr);
	
	printf("%d",iRet);
	
	return 0;
}