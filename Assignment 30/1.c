//Write a program which accept one number from user and count number of on bits in it without using % operator.

//Input : 11		Output : 3


#include<stdio.h>

int CountBit(unsigned int iNo)
{
	unsigned int iMask = 0x00000001;
	unsigned int iResult = 0;
	int iCnt = 0, i = 0;
	
	for(i = 0 ; i < 32 ; i++)
	{
		iResult = iNo & iMask;
	
		if(iResult == iMask)
		{
			iCnt++;
		}
		iMask = iMask << 1;
	}
	return iCnt;
}

int main()
{
	unsigned int iValue = 0;
	int iRet = 0;
	
	printf("Enter number :");
	scanf("%d",&iValue);
	
	iRet = CountBit(iValue);
	
	printf("Total on bits are :%d\n",iRet);
	
	return 0;
}