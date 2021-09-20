//Accept N number from user and return difference between summation of even elements and summation of odd elements

//Input : 6		Elements : 85 66 3 80 93 88		Output : 53(234 - 181)


#include<stdio.h>
#include<stdlib.h>

int Difference(int Arr[],int iSize)					
{
	int i = 0;
	int EiSum = 0 , OiSum = 0;
	int Diff = 0;
	
	for(i = 0 ; i < iSize ; i++)
	{
		if(Arr[i] % 2 == 0)
		{
			EiSum = EiSum + Arr[i];
		}
		else
		{
			OiSum = OiSum + Arr[i];
		}
	}
	Diff = EiSum - OiSum;
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
	
	iRet  = Difference(p,iSize);					
	
	printf("Result is is :%d\n",iRet);
	
	free(p);										
	
	return 0;
}