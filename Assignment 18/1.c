//Accept N number of elements from user and return frequency of even elements.

//Input : 6		Elements : 85 66 3 80 93 88		Output : 3


#include<stdio.h>
#include<stdlib.h>


int Display(int Arr[],int iSize)
{
	int i = 0 , iCnt = 0;
	
	for(i = 0 ; i < iSize ; i++)
	{
		if(Arr[i] % 2 == 0)
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
	
	iRet = Display(p,iSize);
	printf("count of even number is :%d",iRet);
	
	free(p);
}