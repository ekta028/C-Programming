//Accept character from user and check whether it is special symbol or not.

//Input : %		Output : It is special character
//Input : Q		Output : It is not special character


#include<stdio.h>

#define TRUE 1
#define FALSE 0

typedef int BOOL;

BOOL ChkSpecial(char ch)
{
	if(ch >= 33 && ch <= 47)
	{
		return TRUE;
	}
	else
	{
		return FALSE;
	}
}

int main()
{
	char cValue = '\0';
	BOOL bRet = FALSE;
	
	printf("Enter the character :");
	scanf("%c",&cValue);
	
	bRet = ChkSpecial(cValue);
	
	if(bRet == TRUE)
	{
		printf("It is Special Character");
	}
	else
	{
		printf("It is not a Special Character");
	}
	return 0;
}