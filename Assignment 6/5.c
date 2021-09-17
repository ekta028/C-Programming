//Write a program which accept number from user and count frequency of such a digit which are less than 6. 

//Iuput : 2395		//Output : 3


#include<stdio.h>

int Count(int iNo)
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
		if(iRem < 6)
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
	
	iRet = Count(iValue);
	
	printf("%d",iRet);
	
	return 0;
}