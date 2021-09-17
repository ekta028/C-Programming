//Write a program which accept number from user and count frequecy of 2 in it.

//Input : 922432	//Output : 3


#include<stdio.h>

int CountTwo(int iNo)
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
		if(iRem == 2)
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
	
	iRet = CountTwo(iValue);
	
	printf("%d",iRet);
	
	return 0;
}