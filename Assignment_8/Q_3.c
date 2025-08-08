#include<stdio.h>

int KMtoMeter(int iNo)
{
    if(iNo < 0)
    {
        iNo = -iNo;
    }

    int iMeter = 0;

    iMeter = iNo * 1000;

    return iMeter;
}

int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter distance : ");
    scanf("%d",&iValue);

    iRet = KMtoMeter(iValue);

    printf("%d KM is equal to %d Meter.",iValue,iRet);

    return 0;
}