//Accept number of rows and number of columns from user and diplay below pattern.

//Input : iRow = 4		iCol = 4		
//Output : 
//A B C D
//a b c d
//A B C D
//a b c d


#include<stdio.h>

void Pattern(int iRow,int iCol)
{
	int i = 0,j = 0;
	char ch = '\0' , cha = '\0';

	for(i = 1  ; i <= iRow ; i++ )
	{
		for(j = 1 , ch = 'A' , cha = 'a'; j <= iCol ; j++ , ch++ , cha++)
		{
			if(i % 2 == 0)
			{
				printf("%c\t",cha);
			}
			else
			{
				printf("%c\t",ch);
			}
		}
		printf("\n");
	}
}
int main()
{
	int iValue1 = 0 , iValue2 = 0;
	
	printf("Enter number of rows and columns :");
	scanf("%d%d",&iValue1,&iValue2);
		
	Pattern(iValue1,iValue2);
		
	return 0;
}
		
		