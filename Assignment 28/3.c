//Write a program which accept one number from user and toggle 7th bit of that number. Return modified number.

//Input : 137		Output : 201

#include<stdio.h>

int ToggleBit(unsigned int iNo)
{
	unsigned int iMask = 0x00000040;
	unsigned int iResult = 0;
	
	iResult = iNo ^ iMask;
	
	return iResult;
}

int main()
{
	unsigned int iValue = 0 , iPos = 0;
	unsigned int iRet = 0;
	
	printf("Enter number :");
	scanf("%d",&iValue);
	
	iRet = ToggleBit(iValue);
	
	printf("Updated number is :%d\n",iRet);
	
	return 0;
}