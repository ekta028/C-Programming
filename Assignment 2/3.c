//Accept one number from user,if number is less than 10 then printf "Hello" otherwise print "Demo".

//Input : 5		Output : Hello
//Input : 45	Output : Demo


#include<stdio.h>

void Display(int iNo)
{
	if(iNo < 10)
	{
		printf("Hello");
	}
	
	else
	{
		printf("Demo");
	}
}

int main()
{
	int iValue = 0;
	
	printf("Enter number");
	scanf("%d",&iValue);
	
	Display(iValue);
	
	return 0;
}