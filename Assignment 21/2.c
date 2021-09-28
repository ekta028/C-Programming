//Accept character from user and check whether it is capital or not(A-Z)

//Input : F		Output : It is Capital
//Input : f		Output : It is not Capital


#include<stdio.h>

#define TRUE 1
#define FALSE 0

typedef int BOOL;

BOOL ChkCapital(char ch)
{
	if((ch >= 'A' && ch <= 'Z'))
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
	char cValue ='\0';
	BOOL bRet = FALSE;
	
	printf("Enter the character :");
	scanf("%c",&cValue);
	
	bRet = ChkCapital(cValue);
	
	if(bRet == TRUE)
	{
		printf("It is Capital");
	}
	
	else
	{
		printf("It is not a Capital");
	}
	return 0;
}