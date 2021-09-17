//Accept one character from user and check whether that character is vowel or not

//Input : E     //Output : TRUE
//Input : d     //output : FALSE

#include<stdio.h>

typedef int BOOL;
#define TRUE 1
#define FALSE 0

int ChkVowel(char cValue)
{
    if(cValue == 'a' || cValue == 'e' || cValue == 'i' || cValue == 'o' || cValue == 'u' ||
        cValue == 'A' || cValue == 'E' || cValue == 'I' || cValue == 'O' || cValue == 'U' )
    {
        return 1;
    }
    else
    {
        return 0;
    }
}
int main()
{
    char cValue = '\0';
    BOOL bRet = FALSE;

    printf("Enter character :");
    scanf("%c",&cValue);

    bRet = ChkVowel(cValue);

    if(bRet == TRUE)
    {
        printf("It is Vowel");
    }
    else
    {
        printf("It is not Vowel");
    }
    return 0;
}