//Write a program which accept one number and position from user and on bit of that position. Return modified number.

//Input : 10		iPos : 3		Output : 14


#include<stdio.h>

int OnBit(unsigned int iNo,int iPos)
{
	unsigned int iMask = 0x00000001;
	unsigned int iResult = 0;
	
	if((iPos < 1) || (iPos > 32))
	{
	
	}
	iMask = iMask << (iPos - 1);
	
	iResult = iNo | iMask;
	
	return iResult;
}

int main()
{
	unsigned int iValue = 0 , iPos = 0;
	unsigned int iRet = 0;
	
	printf("Enter number :");
	scanf("%d",&iValue);
	
	printf("Enter Position :");
	scanf("%d",&iPos);
	
	iRet = OnBit(iValue,iPos);
	
	printf("Updated number is :%u\n",iRet);
	
	return 0;
}