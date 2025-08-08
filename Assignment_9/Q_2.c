#include<stdio.h>

#define TRUE 1
#define FALSE 0

typedef int BOOL;

BOOL chkZero(int iNo)
{
    int iDigit = 0;
    BOOL bFlag = FALSE;

    if(iNo < 0)
    {
        iNo = -iNo;
    }

    while(iNo != 0)
    {
        iDigit = iNo % 10;
        if(iDigit == 0)
        {
            bFlag = TRUE;
            break;
        }
        iNo = iNo / 10;
    }

    return bFlag;
}

int main()
{
    int iValue = 0;
    BOOL bRet = FALSE;

    printf("Enter Number : ");
    scanf("%d",&iValue);

    bRet = chkZero(iValue);

    if(bRet == TRUE)
    {
        printf("It Contains Zero.");
    }
    else
    {
        printf("There is No zero.");
    }

    return 0;
}