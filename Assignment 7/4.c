//Write a program which accept number from user and return multiplication of all digits.

//Input : 2395		Output : 270


#include<stdio.h>

int MultDigits(int iNo)
{
	int iRem = 0;
	int iMult = 1;
	
	while(iNo > 0)
	{
		iRem = iNo % 10;
		{
			iMult = iMult * iRem;
			iNo = iNo / 10;
		}
	}
	return iMult;
}

int main()
{
	int iValue = 0;
	int iRet = 0;
	
	printf("Enter number :");
	scanf("%d",&iValue);
	
	iRet = MultDigits(iValue);
	
	printf("Multiplication is : %d",iRet);
	
	return 0;
}