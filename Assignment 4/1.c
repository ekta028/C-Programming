//Write a program which accept number from user and display its multiplication of factors.

//Input : 12		Output : 144(1 * 2 * 3 * 4 * 6)


#include<stdio.h>

int MultFact(int iNo)
{
	int iCnt = 0;
	int iMult = 1;
	
	if(iCnt < 0)
	{
		iNo = -iNo;
	}
	
	for(iCnt = 1 ; iCnt < iNo ; iCnt++)
	{
		if(iNo % iCnt == 0)
		{
			iMult = iMult * iCnt;
		}
	}
	return iMult;
}

int main()
{
	int iValue = 0;
	int iRet = 0;
	
	printf("Enter Number :");
	scanf("%d",&iValue);
	
	iRet = MultFact(iValue);
	
	printf("Multiplication of factor of %d is %d",iValue,iRet);
	
	return 0;
}