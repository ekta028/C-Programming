//Write a program which accept string from user and copy the contents of that string into another string.(Implement strcpy()).

//Input : "Marvellous Multi OS"		iNo = 10		Output : "Marvellous"


#include<stdio.h>

void strncpyX(const char src[],char dest[],int value)
{
	if(src == NULL || dest == NULL)
	{
		return;
	}
	
	while(value > 0 && *src != '\0')
	{
		*dest = *src;
		dest++;
		src++;
		value--;
	}
	*dest = '\0';
}
int main()
{
	char arr[20];
	char brr[20];
	int iNo = 0;
	
	printf("Enter string :");
	scanf("%[^'\n']s",arr);
	
	printf("Enter number of elements to copy\n");
	scanf("%d",&iNo);
	
	strncpyX(arr,brr,iNo);
	
	printf("Updated string is : %s",brr);
	
	return 0;
}