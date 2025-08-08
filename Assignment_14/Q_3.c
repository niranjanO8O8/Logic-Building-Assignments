// a       b       c       d       e
// 1       2       3       4       5
// a       b       c       d       e
// 1       2       3       4       5
// a       b       c       d       e


#include<stdio.h>

void Pattern(int iRow, int iCol)
{
    int iCnt1 = 0;
    int iCnt2 = 0;
    char cLetter = '\0';
    

    for(iCnt1 = 1; iCnt1 <= iRow; iCnt1++)
    {
        for(iCnt2 = 1, cLetter = 'a'; iCnt2 <= iCol; iCnt2++)
        {
            if((iCnt1 % 2) == 0)
            {
                printf("%d\t", iCnt2);
            }
            else
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