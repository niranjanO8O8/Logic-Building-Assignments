#include<stdio.h>

double SquareMeter(int iNo)
{
    double dMeter = 0.0;

    dMeter = iNo * 0.0929;

    return dMeter;
}

int main()
{
    int iValue = 0.0;
    double dRet = 0.0;

    printf("Enter Area in Square feet : ");
    scanf("%d",&iValue);

    dRet = SquareMeter(iValue);

    printf("%d sq. feet is equal to %f sq. meter.",iValue,dRet);

    return 0;
}