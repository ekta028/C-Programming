//Accept number fo rows and number of columns from user and display below pattern.

//Input : iRow : 6		iCol : 6
//Output :
//* * * * * *
//* # # # * *
//* # # * $ *
//* # * $ $ *
//* * $ $ $ *
//* * * * * *


#include<stdio.h>

void Pattern(int iRow,int iCol)
{
	int i = 0 , j = 0;
	
	for(i = iRow ; i >= 1 ; i--)
	{
		for(j = 1 ; j <= iCol ; j++)
		{
			if(i == 1 || j == 1 || i == iRow || j == iCol || i == j)
			{
				printf("*\t");
			}
			else
			if(i > j)
			{
				printf("#\t");
			}
			else
			{
				printf("$\t");
			}
		}
		printf("\n");
	}
}

int main()
{
	int iValue1 = 0 , iValue2 = 0;
	
	printf("Enter number of rows :");
	scanf("%d",&iValue1);
	
	printf("Enter number of columns :");
	scanf("%d",&iValue2);
	
	Pattern(iValue1,iValue2);
	
	return 0;
}