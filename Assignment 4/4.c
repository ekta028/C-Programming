//Write a program which accpet number from user and print summation of all its non factors.

//Input : 12	Output : 50


#include<stdio.h>

int SumNonFact(int iNo)
{
	int iCnt = 0;
	int iSum = 0;
	
	if(iNo < 0)
	{
		iNo = -iNo;
	}
	
	for(iCnt = 1 ; iCnt < iNo ; iCnt++)
	{
		if(iNo % iCnt != 0)
		{
			iSum = iSum + iCnt;
		}
	}
	return iSum;
}

int main()
{
	int iValue = 0;
	int iRet = 0;
	
	printf("Enter Number :");
	scanf("%d",&iValue);
	
	iRet = SumNonFact(iValue);
	
	printf("Sumation of non factors of %d is %d",iValue,iRet);
	
	return 0;
}