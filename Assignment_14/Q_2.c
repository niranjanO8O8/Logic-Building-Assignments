// 2       4       6       8
// 1       3       5       7
// 2       4       6       8
// 1       3       5       7


#include<stdio.h>

void Pattern(int iRow, int iCol)
{
    int iCnt1 = 0;
    int iCnt2 = 0;
    int iDigit1 = 0;
    int iDigit2 = 0;


    for(iCnt1 = 1; iCnt1 <= iRow; iCnt1++)
    {
        for(iCnt2 = 1, iDigit1 = 1, iDigit2 = 2; iCnt2 <= iCol; iCnt2++)
        {
            if((iCnt1 % 2) == 0)
            {
                printf("%d\t",iDigit1);
                iDigit1 = iDigit1 + 2;
            }
            else
            {
                printf("%d\t",iDigit2);
                iDigit2 = iDigit2 + 2;
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