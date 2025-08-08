#include<stdio.h>

int FactDiff(int iNo)
{
    int iCnt = 0;
    int iSumFact = 0;
    int iSumNonFact = 0;
    int iDiff = 0;

    if(iNo <= 0)      //Updater
    {
        iNo = -iNo;
    }

    for(iCnt = 1; iCnt < iNo; iCnt++)
    {
        if((iNo % iCnt != 0))
        {
            iSumNonFact = iSumNonFact + iCnt;
        }
        else
        {
            iSumFact = iSumFact + iCnt;
        }
    }

    iDiff = iSumFact - iSumNonFact;

    return iDiff;

}



int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter number : ");
    scanf("%d",&iValue); 

    iRet = FactDiff(iValue);

    printf("%d",iRet);

    return 0;
}