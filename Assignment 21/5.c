//Accept divisions of student from user and depends on the division display exam timing.There are 4 divisions are in school as A,B,C,D.Exem of division A at 7AM,B at 8.30AM,c at 9.20AM and D at 10.30AM.(Application should be case insensetive).

//Input : C		Output : Exam time is at : 9.20AM
//Input : c		Output : Exam time is at : 9.20AM


#include<stdio.h>

void DisplaySchedule(char chDiv)
{
	if(chDiv == 'A' || chDiv == 'a')
	{
		printf("Exam time is at : 7AM");
	}
	
	if(chDiv == 'B' || chDiv == 'b')
	{
		printf("Exam time is at : 8.30AM");
	}
	
	if(chDiv == 'C' || chDiv == 'c')
	{
		printf("Exam time is at : 9.20AM");
	}
	
	if(chDiv == 'D' || chDiv == 'd')
	{
		printf("Exam time is at : 10.30AM");
	}
}

int main()
{
	char cValue = '\0';
	
	printf("Enter division :");
	scanf("%c",&cValue);
	
	DisplaySchedule(cValue);
	
	return 0;
}