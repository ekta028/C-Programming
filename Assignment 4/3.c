//Write a program which accept number from user and print all its non factors.

//Input : 12		Output : 5 7 8 9 10 11


#include<stdio.h>

void NonFact(int iNo)
{
	int iCnt = 0;
	
	if(iNo < 0)
	{
		iNo = -iNo;
	}
	
	for(iCnt = 1 ; iCnt < iNo ; iCnt++)
	{
		if(iNo % iCnt != 0)
		{
			printf("%d\t",iCnt);
		}
	}
}

int main()
{
	int iNo = 0;
	
	printf("Enter Number :");
	scanf("%d",&iNo);
	
	NonFact(iNo);
	
	return 0;
}