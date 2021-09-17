//Write a program which accept number from user and return difference between summation of even digits and summation of odd digits.

//Input : 2395		Output : -15(2 - 17)


#include<stdio.h>

int CountDiff(int iNo)
{
	int iRem = 0 ;
	int iESum = 0 , iOSum = 0;
	int iSum = 0;
	
	while(iNo > 0)
	{
		iRem = iNo % 10;
		
		if(iRem % 2 == 0)
		{
			iESum = iESum + iRem;
		}
		else
		{
			iOSum = iOSum + iRem;
		}
		iNo = iNo / 10;
	}
	iSum = iESum - iOSum;

	return iSum;
}
		
		
int main()
{
	int iValue = 0;
	int iRet = 0;
	
	printf("Enter number :");
	scanf("%d",&iValue);
	
	iRet = CountDiff(iValue);
	
	printf("Difference is : %d",iRet);
	
	return 0;
}