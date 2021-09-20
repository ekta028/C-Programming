//Accept N Number from user and return difference between frequency of even numbers and frequency of odd numbers.

//Input : 7		Elements : 85 66 3 80 93 88	90		Output : 1(4 - 3)


#include<stdio.h>
#include<stdlib.h>

int Frequency(int Arr[],int iSize)					
{
	int i = 0;
	int EiCnt = 0 , OiCnt = 0;
	int Diff = 0;
	
	for(i = 0 ; i < iSize ; i++)
	{
		if(Arr[i] % 2 == 0)
		{
			EiCnt++;
		}
		else
		if(Arr[i] % 2 == 1)
		{
			OiCnt++;
		}
	}
	Diff = EiCnt - OiCnt;
	return Diff;
}

int main()
{						
	int iSize = 0	, iRet = 0 , i = 0;
	int *p = NULL;	
	
	printf("Enter the number of elements :");		
	scanf("%d",&iSize);
	
	p = (int *)malloc(iSize * sizeof(int));		
	if(p == NULL)
	{
		printf("Unable to allocate memory");
		return -1;
	}
	
	printf("Enter %d elements :\n",iSize);					
	for(i = 0 ; i < iSize ; i++)
	{
		printf("Enter element :%d",i+1);
		scanf("%d",&p[i]);
	}
	
	iRet  = Frequency(p,iSize);					
	
	printf("Result is :%d\n",iRet);
	
	free(p);										
	
	return 0;
}