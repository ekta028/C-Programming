//Accept N numbers from user and accept one another number as NO,return product of all odd elements

//Input : N : 6		NO : 66		Elements : 15 66 3 70 10 88		Output : 45


#include<stdio.h>
#include<stdlib.h>

int Product(int Arr[],int iSize)
{
	int i = 0 ,iMult = 1 ;
	
	for(i = 0 ; i < iSize ; i++)
	{
		if(Arr[i] % 2 == 1)
		{
			iMult = iMult * Arr[i];
		}
	}
	return iMult;
}
	
int main()
{
	int iSize = 0 , iCnt = 0 , iRet = 0; 
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
	
	iRet = Product(p,iSize);
	
	printf("Product : %d",iRet);
	
	free(p);
}