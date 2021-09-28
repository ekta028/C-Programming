//Wite a program which accept sting from user and display it in reverse order.

//Input : "MarvellouS"		Output : "SuollevraM"


#include<stdio.h>

void Display(char str[])
{
	int iCnt = 0;
	
	while(*str != '\0')
	{
		iCnt++;
		str++;
	}
	str--;
	
	while(iCnt > 0)
	{
		printf("%c",*str);
		str--;
		iCnt--;
	}
}

	
int main()
{
	char arr[20];
	
	printf("Enter string :");
	scanf("%[^'\n']s",arr);
	
	Display(arr);
	
	return 0;
}