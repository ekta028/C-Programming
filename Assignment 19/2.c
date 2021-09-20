//Accept N numbers from user and accept one another number as NO,return index of first occurence of that NO.

//Input : N : 6		NO : 66		Elements : 85 66 3 66 93 88		Output : 1


#include<stdio.h>
#include<stdlib.h>

int FirstOcc(int Arr[],int iSize,int iNo)
{
	int i = 0 ;
	
	for(i = 0 ; i < iSize ; i++)
	{
		if(Arr[i]  == iNo)
		{
			break;
		}
	}
	return  i;
	
}
	
int main()
{
	int iSize = 0 , iCnt = 0 ,iValue = 0 , iRet = 0; 
	int *p = NULL;
	
	printf("Enter number of elements :");
	scanf("%d",&iSize);
	
	printf("Enter number :");
	scanf("%d",&iValue);
	
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
	
	iRet = FirstOcc(p,iSize,iValue);
	
	printf("First occurence is at index : %d",iRet);
	
	free(p);
}