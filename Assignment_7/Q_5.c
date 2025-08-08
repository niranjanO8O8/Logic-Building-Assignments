#include<stdio.h>

int FactorialDiff(int iNo)
{
    if(iNo < 0)
    {
        iNo = -iNo;
    }

    int iCnt = 0;
    int iEvenCount = 0;
    int iOddCount = 0;
    int iDiff = 0;
    
    for(iCnt = 1, iEvenCount = 1, iOddCount = 1; iCnt <= iNo; iCnt++)
    {
        if((iCnt % 2) != 0)
        {
            iOddCount = iOddCount * iCnt;
        }
        else
        {
            iEvenCount = iEvenCount * iCnt;
        }
    }

    iDiff = iEvenCount - iOddCount;

    return iDiff;
}

int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter Number : ");
    scanf("%d",&iValue);

    iRet = FactorialDiff(iValue);

    printf("Odd Factorial of number is : %d ",iRet);

    return 0;
}