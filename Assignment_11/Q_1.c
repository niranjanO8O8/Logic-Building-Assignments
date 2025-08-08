//A       B       C       D       E

#include<stdio.h>

void Pattern(int iNo)
{
    char cLetter = 'A'; 
    int iCnt = 0;

    if(iNo < 0)
    {
        iNo = -iNo;
    }

    for(iCnt = 1; iCnt <= iNo; iCnt++,cLetter++)
    {
        printf("%c\t",cLetter);
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