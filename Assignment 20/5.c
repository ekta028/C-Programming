//Accept N numbers from user and display summation of digits of each number.

//Input : N : 6		Elements : 8225 665 3 76 953 858		Output : 17 17 3 13 17 21


#include<stdio.h>
#include<stdlib.h>

void Digits(int Arr[],int iSize)
{
	int i = 0 ,	iRem = 0 ,iSum = 0, iCnt = 0;
	
	while(i < iSize)
	{
		//int iSum = 0;
		while(Arr[i] > 0)
		{
			iRem = Arr[i] % 10;
			iSum = iSum + iRem;
			Arr[i] = Arr[i] / 10;
		}
		printf("sum of Arr[%d] is %d\n",i,iSum);
		iSum = 0;
		i++;
	}
	
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
	
	Digits(p,iSize);
	
	free(p);
}