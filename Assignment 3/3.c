//Write a program which accept number from user and print even factors of that number.

//Input : 36		Output : 2 6 12 18


#include<stdio.h>

void DisplayFactor(int iNo)
{
	int iCnt = 0;
	
	if(iNo < 0)
	{
		iNo = -iNo;
	}
	
	for(iCnt = 1 ; iCnt < iNo ; iCnt++)
	{
		if(iNo % iCnt == 0 && iCnt % 2 == 0)
		{
			printf("%d\t",iCnt);
		}
	}
}

int main()
{
	int iValue = 0;
	
	printf("Enter Number :");
	scanf("%d",&iValue);
	
	DisplayFactor(iValue);
	
	return 0;
}