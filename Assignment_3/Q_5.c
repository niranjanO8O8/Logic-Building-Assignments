#include<stdio.h>

typedef int BOOl;

#define TRUE 1
#define FALSE 0

BOOl ChkVowel(char charValue)
{
    if((charValue == 'A') || (charValue == 'E')|| (charValue == 'I')|| (charValue == 'O')|| (charValue == 'U') || (charValue == 'a') || (charValue == 'e')|| (charValue == 'i')|| (charValue == 'o')|| (charValue == 'u'))
    {
        return TRUE;
    }
    else
    {
        return FALSE;
    }
}



int main()
{
    char cValue = '\0';
    BOOl bRet = FALSE;

    printf("Enter charcter : ");
    scanf("%c",&cValue);

    bRet = ChkVowel(cValue);

    if(bRet == TRUE)
    {
        printf("It is Vowel.");
    }
    else
    {
        printf("It is not Vowel.");
    }

    return 0;
}