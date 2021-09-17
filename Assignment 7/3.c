//Write a program which accept number from user and return count of digit in between 3 and 7.

//Input : 8462		Output : 2


#include<stdio.h>

int CountRange(int iNo)
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
		if(iRem > 3  && iRem < 7)
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
	
	iRet = CountRange(iValue);
	
	printf("%d",iRet);
	
	return 0;
}