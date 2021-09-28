//Write a program which accept string from user and reverse that string in place.


#include<stdio.h>

int strRevX(char str[])
{
	char *start = NULL;
	char *end = NULL;
	char temp;
	
	start = str;
	end = str;
	
	while(*end != '\0')
	{
		end++;
	}
	end--;
	
	while(start < end)
	{
		temp = *start;
		*start = *end;
		*end = temp;
		start++;
		end--;
	}
}	
	
int main()
{
	char arr[20];
	
	printf("Enter string :");
	scanf("%[^'\n']s",arr);
	
	strRevX(arr);
	
	printf("Modified string is : %s",arr);
	
	return 0;
}