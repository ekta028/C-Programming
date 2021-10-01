//Write a program which accept one number and two position from user and check whether bit at first and bit at second position is on or off.

//Input : 10	iPos1 = 3		iPos2 = 7		Output = Bit is Off
//Input : 10	iPos1 = 2		iPos2 = 4		Output = Bit is On


#include<stdio.h>
#include<stdbool.h>

bool CheckBit(unsigned int iNo,int iPos1,int iPos2)
{
	unsigned int iMask1 = 0x00000001;
	unsigned int iMask2 = 0x00000001;
	unsigned int iMask = 0;
	unsigned int iResult = 0;
	
	if((iPos1< 1) || (iPos1 > 32) || (iPos2 < 1) || (iPos2 > 32))
	{
		return false;
	}
	iMask1 = iMask1 << (iPos1 - 1);
	iMask2 = iMask2 << (iPos2 - 1);
	
	iMask = iMask1 | iMask2;
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
	unsigned int iValue = 0 , iPos1 = 0 , iPos2 = 0;
	bool bRet = false;
	
	printf("Enter number :");
	scanf("%d",&iValue);
	
	printf("Enter 1st Position :");
	scanf("%d",&iPos1);
	
	printf("Enter  2nd Position :");
	scanf("%d",&iPos2);
	
	bRet = CheckBit(iValue,iPos1,iPos2);
	
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