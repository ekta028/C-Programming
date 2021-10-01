//Write a program which checks whether 5th and 18th bit is on or off.

//Input : 131088		//Output : Bit is On
//Input : 131072		//Output : Bit is Off


#include<stdio.h>

#define TRUE 1
#define FALSE 0

typedef int BOOL;

BOOL CheckBit(int iNo)
{
	unsigned int iMask = 0x00020010;
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