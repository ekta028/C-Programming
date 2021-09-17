//Accept number from user and display below pattern.

//Input : 8		Output : 2 4 6 8 10 12 14 16


#include<stdio.h>

void Pattern(int iNo)
{
	int i = 0;
	
	for(i = 1 ; i <= iNo * 2 ; i++)
	{
		if(i % 2 == 0)
		{
			printf("%d\t",i);
		}
	}
}

int main()
{
	int iValue = 0;
	
	printf("Enter number of elements:");
	scanf("%d",&iValue);
	
	Pattern(iValue);
	
	return 0;
}