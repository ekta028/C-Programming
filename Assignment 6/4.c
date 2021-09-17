//Write a program which accept number from user and count frequency of 4 in it.

//Input : 9440		//Output : 2


#include<stdio.h>

int CountFour(int iNo)
{
	int iRem = 0;
	int iCnt = 0;
	
	if(iNo < 0)
	{
		iNo = -iNo;
	}
	
	while(iNo > 0)
	{
		iRem = iNo % 10;
		if(iRem == 4)
		{
			iCnt++;
		}
		iNo = iNo / 10;
	}
	return iCnt;
}

int main()
{
	int iValue = 0;
	int iRet = 0;
	
	printf("Enter number :");
	scanf("%d",&iValue);
	
	iRet = CountFour(iValue);
	
	printf("%d",iRet);
	
	return 0;
}