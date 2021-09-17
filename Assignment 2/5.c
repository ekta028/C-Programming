//Accept number form user and check whether number is even or odd.

//Input : 5		Output : Number is Odd
//Input : 58	Output : Number is Even


#include<stdio.h>

typedef int BOOL;
#define TRUE 1
#define FALSE 0

int CheckEven(int iNo)
{
	if((iNo % 2) == 0)
	{
		return TRUE;
	}
	
	else
	{
			return FALSE;
	}
}

int main()
{
	int iValue = 0;
	BOOL bRet = FALSE;
	
	printf("Enter number");
	scanf("%d",&iValue);
	
	bRet = CheckEven(iValue);
	
	if(bRet == TRUE)
	{
		printf("Number is Even");
	}
	
	else
	{
		printf("Number is Odd");
	}
	return 0;
}