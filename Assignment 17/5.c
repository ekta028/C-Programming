//Accept N number of elements from user and diplay all such elements which are multiples of 11.

//Input : 6		Elements : 85 66 3 55 93 88		Output : 66 55 88


#include<stdio.h>
#include<stdlib.h>


void Display(int Arr[],int iSize)
{
	int i = 0;
	
	printf("Numbers which are multiples of 11 are :");
	for(i = 0 ; i < iSize ; i++)
	{
		if(Arr[i] % 11 == 0)
		{
			printf("%d\n",Arr[i]);
		}
	}
}
	
int main()
{
	int iSize = 0 , iCnt = 0 ; 
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
	
	Display(p,iSize);
	
	free(p);
}