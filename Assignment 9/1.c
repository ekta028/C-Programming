//Write a program which accept range from user and display all numbers in between that range.

//Input1 : 23		Input2 : 30		Output : 23 24 25 26 27 28 29 30


#include<stdio.h>

void RangeDisplay(int iStart , int iEnd)
{
	int iCnt = 0 ;
	
	for(iCnt = iStart ; iCnt <= iEnd ; iCnt++)
	{
		printf("%d\t",iCnt);
	}
}

int main()
{
	int iValue1 = 0 , iValue2 = 0;
	
	printf("Enter starting point :");
	scanf("%d",&iValue1);
	
	printf("Enter ending point :");
	scanf("%d",&iValue2);
	
	RangeDisplay(iValue1 , iValue2);
	
	return 0;
}