//Accept N numbers from user and accept range,display all elements from that range.

//Input : N : 6		Start : 66		End : 90		Elements : 85 66 3 76 93 88		Output : 66 76 88

#include<stdio.h>
#include<stdlib.h>

void Range(int Arr[],int iSize,int iStart,int iEnd)
{
	int i = 0 ;
	
	printf("Numbers between that range are :");
	for(i = 0 ; i <= iSize ; i++)
	{
		if(Arr[i] >= iStart && Arr[i] <= iEnd)
		{
			printf("%d\n",Arr[i]);
		}
	}
	
}
	
int main()
{
	int iSize = 0 , iCnt = 0 ,iValue1 = 0 , iValue2 = 0, iRet = 0; 
	int *p = NULL;
	
	printf("Enter number of elements :");
	scanf("%d",&iSize);
	
	printf("Enter starting point :");
	scanf("%d",&iValue1);
	
	printf("Enter ending point :");
	scanf("%d",&iValue2);
	
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
	
	Range(p,iSize,iValue1,iValue2);
	
	free(p);
}