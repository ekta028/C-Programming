//Write a program which accept one number from user and on its first 4 bits.Return modified number.

//Input : 73		Output : 79


#include<stdio.h>

int OffBit(unsigned int iNo)
{
	unsigned int iMask = 0x0000000F;
	unsigned int iResult = 0;
	
	iResult = iNo | iMask;
	
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