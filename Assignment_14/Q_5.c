// 1       2       3       4
// 2       3       4       5
// 3       4       5       6
// 4       5       6       7

#include<stdio.h>

void Pattern(int iRow, int iCol)
{
    int iCnt1 = 0;
    int iCnt2 = 0;
    
    for(iCnt1 = 1; iCnt1 <= iRow; iCnt1++)
    {
        for(iCnt2 = 1; iCnt2 <= iCol; iCnt2++)
        {
            if((iCnt1 % 2) == 0)
            {
                printf("%d\t", iCnt1 + iCnt2 - 1 );
            }
            else
            {
                printf("%d\t", iCnt1 + iCnt2 - 1 );
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