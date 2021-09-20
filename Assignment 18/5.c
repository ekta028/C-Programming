//Accept N number of elements from user and accept one another number as NO,return frequency of NO from it.

//Input : N : 6		NO : 66		Elements85 66 3 66 93 88		Output : 2


#include<stdio.h>
#include<stdlib.h>


int Frequency(int Arr[],int iSize,int iNo)
{
	int i = 0 , iCnt = 0;
	
	for(i = 0 ; i < iSize ; i++)
	{
		if(Arr[i]  == iNo)
		{
			iCnt++;
		}
	}
	return iCnt;
}
	
int main()
{
	int iSize = 0 , iValue = 0 , iCnt = 0 ,iRet = 0; 
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
	
	iRet = Frequency(p,iSize,iValue);
	printf("count is :%d",iRet);
	
	free(p);
}