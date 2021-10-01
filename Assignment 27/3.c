//Write program which checks whether 7th , 15th , 21st and 27th bit is on or off.

//Input : 68173888		//Output : Bit is On
//Input : 1065024		//Output : Bit is Off


#include<stdio.h>

#define TRUE 1
#define FALSE 0

typedef int BOOL;

BOOL CheckBit(int iNo)
{
	unsigned int iMask = 0x04104040;
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