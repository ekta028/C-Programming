//Write a program which checks whether 7th , 8th and 9th bit is on or off.

//Input : 448		Output : Bit is On
//Input : 195		Output : Bit is Off


#include<stdio.h>

#define TRUE 1
#define FALSE 0

typedef int BOOL;

BOOL CheckBit(int iNo)
{
	unsigned int iMask = 0x000001C0;
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