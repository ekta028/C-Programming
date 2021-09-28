//Accept character from user and check whether it is aplhabet or not(A-Z a-z).

//Input : F		Output : It is character
//Input : &		Output : It is not character


#include<stdio.h>

#define TRUE 1
#define FALSE 0

typedef int BOOL;

BOOL ChkAlpha(char ch)
{
	if((ch >= 'A' && ch <= 'Z') ||  (ch >= 'a' && ch <= 'z'))
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
	
	bRet = ChkAlpha(cValue);
	
	if(bRet == TRUE)
	{
		printf("It is Character");
	}
	
	else
	{
		printf("It is not a cahracter");
	}
	return 0;
}