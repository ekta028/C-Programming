//Accept N numbers from user and return the largest number.

//Input : N : 6		Elements : 85 66 3 66 93 88		Output : 93


#include<stdio.h>
#include<stdlib.h>

int Maximum(int Arr[],int iSize)
{
	int i = 0 ,	 iMAX = 0;
	
	for(i = 0 ; i < iSize ; i++)
	{
		if(iMAX < Arr[i])
		{
			iMAX = Arr[i];
		}
	}
	return iMAX;
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
	
	iRet = Maximum(p,iSize);
	
	printf("Maximum number is :%d",iRet);
	
	free(p);
}