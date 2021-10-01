//Write a program which accept one number and position from user and off bit of that position. Return modified number.

//Input : 10		iPos : 2		Output : 8


#include<stdio.h>

int OffBit(unsigned int iNo,int iPos)
{
	unsigned int iMask = 0x00000001;
	unsigned int iResult = 0;
	
	if((iPos < 1) || (iPos > 32))
	{
		
	}
	iMask = iMask << (iPos - 1);
	
	iMask = ~iMask;
	
	iResult = iNo & iMask;
	
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
	
	iRet = OffBit(iValue,iPos);
	
	printf("Updated number is :%u\n",iRet);
	
	return 0;
}