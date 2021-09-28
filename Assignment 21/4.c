//Accept character from user and check whether it is small case or not(a-z)

//Input : f		Output : It is small case
//Input : F		Output : It is not small case


#include<stdio.h>

#define TRUE 1
#define FALSE 0

typedef int BOOL;

BOOL ChkCapital(char ch)
{
	if((ch >= 'a' && ch <= 'z'))
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
		printf("It is Small case");
	}
	
	else
	{
		printf("It is not a small case");
	}
	return 0;
}