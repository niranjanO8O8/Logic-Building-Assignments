// 2       4       6       8       10      12      14      16
#include<stdio.h>

void Pattern(int iNo)
{
    int iCnt = 0;
    int iNum = 0;

    if(iNo < 0)
    {
        iNo = -iNo;
    }

    for(iCnt = 1; iCnt <= iNo; iCnt++)
    {
        iNum = 2 * iCnt;
        printf("%d\t",iNum);
    }

}

int main()
{
    int iValue = 0;

    printf("Enter Number of elements : ");
    scanf("%d",&iValue);

    Pattern(iValue);

    return 0;
}