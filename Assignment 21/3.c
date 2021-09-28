//Accept character from user and check whether it is digit or not(0-9).

//Input : 8		Output : It is digit
//Input : F		Output : It is not digit


#include<stdio.h>

#define TRUE 1
#define FALSE 0

typedef int BOOL;

BOOL ChkDigit(int no)
{
	if(no >= 49 && no <= 57)
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
	char iValue = 0;
	BOOL bRet = FALSE;
	
	printf("Enter the character :");
	scanf("%c",&iValue);
	
	bRet = ChkDigit(iValue);
	
	if(bRet == TRUE)
	{
		printf("It is digit");
	}
	else
	{
		printf("It is not a digit");
	}
	return 0;
}