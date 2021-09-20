//Accept N number of elements from user and check whether it contains 11 in it or not.

//Input : 6		Elements : 85 66 11 80 93 88		Output : 11 is Present
//Input : 6		Elements : 85 66 3  80 93 88		Output : 11 is Absent


#include<stdio.h>
#include<stdlib.h>

#define TRUE 1
#define FALSE 0
typedef int BOOL;

BOOL Check(int Arr[],int iSize)
{
	int i = 0 , iCnt = 0;
	
	for(i = 0 ; i < iSize ; i++)
	{
		if(Arr[i]  == 11)
		{
			iCnt++;
		}
	}
	if(iCnt > 0)
	{
		return 1;
	}
	else
	{
		return 0;
	}
}
	
int main()
{
	int iSize = 0 , iCnt = 0 ; 
	BOOL bRet = 0;
	int *p = NULL;
	
	printf("Enter number of elements :");
	scanf("%d",&iSize);
	
	p = (int *)malloc(iSize * sizeof(int));
	
	if(p == NULL)
	{
		printf("Unable to allocate memory");
		return -1;
	}
	
	printf("Enter %d elements",iSize);
	for(iCnt = 0 ; iCnt < iSize ; iCnt++)
	{
		scanf("%d",&p[iCnt]);
	}
	
	bRet = Check(p,iSize);
	
	if(bRet == 1)
	{
		printf("It is present");
	}
	else
	{
		printf("It is absent");
	}
	
	free(p);
}