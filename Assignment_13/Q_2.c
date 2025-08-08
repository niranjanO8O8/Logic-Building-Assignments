// A       B       C       D
// a       b       c       d
// A       B       C       D
// a       b       c       d

#include<stdio.h>

void Pattern(int iRow, int iCol)
{
    int iCnt1 = 0;
    int iCnt2 = 0;
    char cLetter = '\0';

    for(iCnt1 = 1; iCnt1 <= iRow; iCnt1++)
    {
        if((iCnt1 % 2) == 0)
        {
            for(iCnt2 = 1, cLetter = 'a'; iCnt2 <= iCol; iCnt2++)
            {
                printf("%c\t",cLetter);
                cLetter++;
            }
        }
        else
        {
            for(iCnt2 = 1, cLetter = 'A'; iCnt2 <= iCol; iCnt2++)
            {
                printf("%c\t",cLetter);
                cLetter++;           
            }
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