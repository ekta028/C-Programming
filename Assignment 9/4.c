//Write a program which accept range from user and display Addition of all even numbers in between that range.

//Input1 : 23		Input2 : 30		Output : 108


#include<stdio.h>

int RangeSumEven(int iStart , int iEnd)
{
	int iCnt = 0 ;
	int iSum = 0 ;
	
	if(iStart < 0 || iEnd < 0)
	{
		printf("Invalid range");
	}
	
	for(iCnt = iStart ; iCnt <= iEnd ; iCnt++)
	{
		if(iCnt % 2 == 0)
		{
			iSum = iSum + iCnt;
		}
	}
	return iSum;
}

int main()
{
	int iValue1 = 0 , iValue2 = 0;
	int iRet = 0;
	
	printf("Enter starting point :");
	scanf("%d",&iValue1);
	
	printf("Enter ending point :");
	scanf("%d",&iValue2);
	
	iRet = RangeSumEven(iValue1 , iValue2);
	
	printf("Sum is : %d",iRet);
	
	return 0;
}