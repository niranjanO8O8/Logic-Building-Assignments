#include<stdio.h>

void DisplayConvert(char charValue)
{
    if((charValue >= 'A') && (charValue <= 'Z'))
    {
        charValue = charValue + 32;
        printf("Converted character : %c",charValue);
    }
    else if((charValue >= 'a') && (charValue <= 'z'))
    {
        charValue = charValue - 32;
        printf("Converted character : %c",charValue);
    }
}



int main()
{
    char cValue = '\0';
    printf("Enter character : ");
    scanf("%c",&cValue);

    DisplayConvert(cValue);

    return 0;
}