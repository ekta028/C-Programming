//Write a program which accpet number from user and return difference between summation of all its factors and non factors.

//Input : 12		Output : -34(16-50)

#include<stdio.h>

int FactDiff(int iNo)
{
	int iCntF = 0 , iCntN = 0;
	int iSumF = 0 , iSumN = 0;
	int iSub;
	
	if(iNo < 0)
	{
		iNo = -iNo;
	}
	
	for(iCntF = 1 ; iCntF < iNo ; iCntF++)
	{
		if(iNo % iCntF == 0)
		{
			iSumF = iSumF + iCntF;
		}
	}
	
	for(iCntN = 1 ; iCntN < iNo ; iCntN++)
	{
		if(iNo % iCntN != 0)
		{
			iSumN = iSumN + iCntN;
		}
	}
	iSub = iSumF - iSumN;
	
	return iSub;
}

int main()
{
	int iValue = 0;
	int iRet = 0;
	
	printf("Enter Number :");
	scanf("%d",&iValue);
	
	iRet = FactDiff(iValue);
	
	printf("Difference between summation of factors and non factors of %d is %d",iValue,iRet);
	
	return 0;
}