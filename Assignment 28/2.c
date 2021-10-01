//Write a program which accept number from user and off 7th and 10th bit of that number.Return modified number.

//Input : 577		//Output : 1

#include<stdio.h>

int OffBit(unsigned int iNo)
{
	unsigned int iMask = 0x00000240;
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