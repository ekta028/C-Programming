//Accept N numbers from user and accept one another number as NO,check whether NO is present or not.

//Input : N : 6		NO : 66		Elements : 85 66 3 66 93 88		Output : Number is Present


#include<stdio.h>
#include<stdlib.h>

#define TRUE 1
#define FALSE 0
typedef int BOOL;

BOOL Check(int Arr[],int iSize,int iNo)
{
	int i = 0 , iCnt = 0;
	
	for(i = 0 ; i < iSize ; i++)
	{
		if(Arr[i]  == iNo)
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
	int iSize = 0 , iCnt = 0 ,iValue = 0; 
	BOOL bRet = 0;
	int *p = NULL;
	
	printf("Enter number of elements :");
	scanf("%d",&iSize);
	
	printf("Enter number :");
	scanf("%d",&iValue);
	
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
	
	bRet = Check(p,iSize,iValue);
	
	if(bRet == 1)
	{
		printf("Number is present");
	}
	else
	{
		printf("Number is absent");
	}
	
	free(p);
}