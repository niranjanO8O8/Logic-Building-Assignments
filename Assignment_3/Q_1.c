#include<stdio.h>



void PrintEven(int iNo)
{
    int iCnt = 0;
    int iCount = 0;


    if(iNo <= 0)
    {
        return;
    }

    iCnt = 1;
    
    while(iCount < iNo)
    {
        if(iCnt % 2 == 0)
        {
            printf("%d\n",iCnt);
            iCount++;
        }
        iCnt++;
    }
}



int main()
{
    int iValue = 0;

    printf("Enter number : ");
    scanf("%d",&iValue); 

    PrintEven(iValue);

    return 0;
}