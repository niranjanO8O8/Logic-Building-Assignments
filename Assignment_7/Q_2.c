#include<stdio.h>

int DollarToINR(int iNo)
{

    int iINR = 0;

    iINR = iNo * 70;

    return iINR;
}

int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter Amount in USD : ");
    scanf("%d",&iValue);

    iRet = DollarToINR(iValue);

    printf("Amount in INR : %d ",iRet);

    return 0;
}