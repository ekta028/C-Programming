//Write a program which accept two strings from user and concate first string after second string.

//Input : "Marvellous Infosystems"		"Logic Building"		Output : "Marvellous Infosystems Logic Building"


#include<stdio.h>

void strcatX(const char src[],char dest[])
{
	char temp;
	
	if(src == NULL || dest == NULL)
	{
		return;
	}
	
	while(*dest != '\0')
	{
		dest++;
	}
	*dest = ' ';
	dest++;
	
	while(*src != '\0')
	{
		*dest = *src;
		src++;
		dest++;
	}
	*dest = '\0';
	
}

int main()
{
	char arr[20];
	char brr[20];
	
	printf("Enter first string :");
	scanf("%[^'\n']s",arr);
	
	printf("Enter second string :");
	scanf(" %[^'\n']s",brr);
	
	strcatX(arr,brr);
	
	printf("After concat string is : %s\n",brr);
	
	return 0;
}