#include<stdio.h>

void Display(int iNo)
{
    char* words[] = {"Zero", "One", "Two", "Three", "Four","Five", "Six", "Seven", "Eight", "Nine" };

    if((iNo >= 0) && (iNo <= 9))
    {
        printf("%s",words[iNo]);
    }
    else
    {
        printf("Invalid Number\n");
    }
}



int main()
{
    int iValue = 0;

    printf("Enter number : ");
    scanf("%d",&iValue); 

    Display(iValue);

    return 0;
}