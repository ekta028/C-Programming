//Accept N numbers from user and display all such numbers which contains 3 digits in it.

//Input : N : 6		NO : 66		Elements : 8225 665 3 76 953 858		Output : 665 953 858


#include<stdio.h>
#include<stdlib.h>

void Digits(int Arr[],int iSize)
{
	int i = 0 ,	iRem = 0 , iCnt = 0, temp;
	
	while(i < iSize)
	{
		temp = Arr[i];
		while(temp > 0)
		{
			//temp = Arr[i];
			iRem = temp % 10;
			{
				iCnt++;
			}
			temp = temp / 10;
		}
		if(iCnt == 3)
		{
			printf("3 digit element at Arr[%d] is :%d\n",i,Arr[i]);
		}
		i++;
		iCnt = 0;
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