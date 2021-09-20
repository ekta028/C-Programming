//Accept N number of elements from user and return frequency of 11 from it.

//Input : 6		Elements : 85 11 3 15 11 111		Output : 2


#include<stdio.h>
#include<stdlib.h>


int Frequency(int Arr[],int iSize)
{
	int i = 0 , iCnt = 0;
	
	for(i = 0 ; i < iSize ; i++)
	{
		if(Arr[i]  == 11)
		{
			iCnt++;
		}
	}
	return iCnt;
}
	
int main()
{
	int iSize = 0 , iCnt = 0 ,iRet = 0; 
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
	
	iRet = Frequency(p,iSize);
	printf("count of 11 is :%d",iRet);
	
	free(p);
}