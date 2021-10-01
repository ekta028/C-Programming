//Write a program which accept number and position from user and check whether bit at that position is on or off.If bit is on return TRUE otherwise FALSE.

//Input : 10		iPos : 2		Output : Bit is On
//Input : 10		iPos : 1		Output : Bit is Off


#include<stdio.h>
#include<stdbool.h>

bool CheckBit(unsigned int iNo,int iPos)
{
	unsigned int iMask = 0x00000001;
	unsigned int iResult = 0;
	
	if((iPos < 1) || (iPos > 32))
	{
		return false;
	}
	iMask = iMask << (iPos - 1);
	
	iResult = iNo & iMask;
	
	if(iResult == iMask)
	{
		return true;
	}
	else
	{
		return false;
	}
}

int main()
{
	unsigned int iValue = 0 , iPos = 0;
	bool bRet = false;
	
	printf("Enter number :");
	scanf("%d",&iValue);
	
	printf("Enter Position :");
	scanf("%d",&iPos);
	
	bRet = CheckBit(iValue,iPos);
	
	if(bRet == true)
	{
		printf("bit is on");
	}
	else
	{
		printf("bit is off");
	}
	
	return 0;
}