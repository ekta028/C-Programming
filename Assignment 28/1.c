//Write a program which accept one number from user and off 7th bit of that number if it is on.

//Input : 79		//Output : 15


#include<stdio.h>

int OffBit(unsigned int iNo)
{
	unsigned int iMask = 0x00000040;
	unsigned int iResult = 0;
	
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
	
	iRet = OffBit(iValue);
	
	printf("Updated number is :%u\n",iRet);
	
	return 0;
}