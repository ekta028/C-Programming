//Write a program which accept one number from user and checks whether 9th and 12th bit is on or off.

//Input : 257		Output : Bit is Off
//Input : 2304		Output : Bit is On


#include<stdio.h>

#define TRUE 1
#define FALSE 0

typedef int BOOL;

BOOL CheckBit(int iNo)
{
	unsigned int iMask = 0x00000900;
	unsigned int iResult = 0;
	
	iResult = iNo & iMask;
	
	if(iResult == iMask)
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
	int iValue = 0;
	BOOL bRet = FALSE;
	
	printf("Enter number :");
	scanf("%d",&iValue);
	
	bRet = CheckBit(iValue);
	
	if(bRet == TRUE)
	{
		printf("Bit is on");
	}
	else
	{
		printf("Bit is off");
	}
	return 0;
}