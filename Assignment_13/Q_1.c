// A       B       C       D
// A       B       C       D
// A       B       C       D
// A       B       C       D

#include<stdio.h>

void Pattern(int iRow, int iCol)
{
    int iCnt1 = 0;
    int iCnt2 = 0;
    char cLetter = '\0';

    for(iCnt1 = 1; iCnt1 <= iRow; iCnt1++)
    {
        for(iCnt2 = 1, cLetter = 'A'; iCnt2 <= iCol; iCnt2++)
        {
            printf("%c\t",cLetter);
            cLetter++;
        }
        printf("\n");
    }

}

int main()
{
    int iValue1 = 0,iValue2 = 0;

    printf("Enter Number of Rows : ");
    scanf("%d",&iValue1);

    printf("Enter Number of Columns : ");
    scanf("%d",&iValue2);

    Pattern(iValue1, iValue2);

    return 0;
}