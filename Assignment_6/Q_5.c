#include<stdio.h>

void TableRev(int iNo)
{
    int iCnt = 0;
    int iSum = 0;

    if(iNo < 0)
    {
        iNo = -iNo;
    }

    for(iCnt = 10; iCnt >= 1; iCnt--)
    {
        iSum = iCnt * iNo;
        printf("%d\t",iSum);
    }
}

int main()
{
    int iValue = 0;

    printf("Enter number : ");
    scanf("%d",&iValue); 

    TableRev(iValue);

    return 0;
}