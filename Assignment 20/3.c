//Accept N numbers from user and return the difference between smallest and largest elements.

//Input : N : 6		Elements : 85 66 3 66 93 88		Output : 90(93 - 3)


#include<stdio.h>
#include<stdlib.h>

int Difference(int Arr[],int iSize)
{
	int i = 0 ,	 iMIN = 0 , iMAX = 0;
	int Diff = 0;
	
	iMIN = Arr[0];
	iMAX = Arr[0];
	
	for(i = 0 ; i < iSize ; i++)
	{
		if(iMAX < Arr[i])
		{
			iMAX = Arr[i];
		}
	}
	
	for(i = 0 ; i < iSize ; i++)
	{
		if(iMIN > Arr[i])
		{
			iMIN = Arr[i];
		}
	}
	
	Diff = iMAX - iMIN;
	return Diff;
}
	
int main()
{
	int iSize = 0 , iCnt = 0 ,iValue = 0,iRet = 0; 
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
	
	iRet = Difference(p,iSize);
	
	printf("Difference is :%d",iRet);
	
	free(p);
}