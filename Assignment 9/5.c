//Write a program which accept range from user and display all numbers in between that range in reverse order.

//Input1 : 10		Input2 : 18		Output : 18 17 16 15 14 13 12 11 10

#include<stdio.h>

void RangeDisplayRev(int iStart , int iEnd)
{
	int iCnt = 0 ;
	
	for(iCnt = iEnd ; iCnt >= iStart ; iCnt--)
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
	
	RangeDisplayRev(iValue1 , iValue2);
	
	return 0;
}