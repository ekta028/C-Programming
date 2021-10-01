//Write a program which accept one number and position from user and toggle contents of first and last nibble of the number. Return modified number.

//Input : 4026531855		Output : 0


#include<stdio.h>

int ToggleBit(unsigned int iNo)
{
	unsigned int iMask = 0xF000000F;
	unsigned int iResult = 0;
		
	iResult = iNo ^ iMask;
	
	return iResult;
}

int main()
{
	unsigned int iValue = 0;
	unsigned int iRet = 0;
	
	printf("Enter number :");
	scanf("%d",&iValue);
	
	iRet = ToggleBit(iValue);
	
	printf("Updated number is :%u\n",iRet);
	
	return 0;
}