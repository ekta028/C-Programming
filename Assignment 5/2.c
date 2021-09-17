//Write a program which accept number from user and display its factors in decreasing order.

//Input : 12		//Output : 6 4 3 2 1 


#include<stdio.h>

void FactRev(int iNo)
{
	int iCnt = 0;
	
	if(iNo < 0)
	{
		iNo = -iNo;
	}
	
	for(iCnt = iNo - 1 ; iCnt >= 1 ; iCnt--)
	{
		if(iNo % iCnt == 0)
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
	
	FactRev(iNo);
	
	return 0;
}