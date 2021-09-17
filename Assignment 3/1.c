//Write a program which accept one number from user and print that number of even numbers on Screen.

//Input : 7		Output : 2 4 6 8 10 12 14


#include<stdio.h>

void PrintEven(int iNo)
{
	int iCnt = 1;
	
	if(iNo <= 0)
	{
		return;
	}
	
	for(iCnt = 1 ; iCnt <= iNo * 2 ; iCnt++)				
	{	
		if(iCnt % 2 == 0)
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
	
	PrintEven(iValue);
	
	return 0;
}