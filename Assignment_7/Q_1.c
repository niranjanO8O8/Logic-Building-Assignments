#include<stdio.h>

void Display(int iNo)
{
    if(iNo < 0)
    {
        iNo = -iNo;
    }

    int iCnt = 0;
    for(iCnt = 1; iCnt <= (iNo * 2); iCnt++)
    {
        if((iCnt > iNo))
        {
            printf("#\t");
        }
        else
        {
            printf("*\t");
        }
    }
}

int main()
{
    int iValue = 0;

    printf("Enter Number : ");
    scanf("%d",&iValue);

    Display(iValue);

    return 0;
}