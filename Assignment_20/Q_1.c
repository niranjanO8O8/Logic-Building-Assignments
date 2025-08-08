#include<stdio.h>
#include<stdlib.h>

#define TRUE 1
#define FALSE 0

typedef int BOOL;

BOOL Check(int Arr[],int iLength, int iNO)
{
    int iCnt = 0;
    BOOL bCheck = 0;

    for(iCnt = 0; iCnt < iLength; iCnt++)
    {
        if((Arr[iCnt] == iNO))
        {
            bCheck = 1;
            break;
        }
    }

    return bCheck;
}

int main()
{
    int iSize = 0;
    int iCnt = 0;
    BOOL bRet = FALSE;
    int iValue = 0;

    int *p = NULL;

    printf("Enter the number of elements : ");
    scanf("%d",&iSize);

    printf("Enter the number to find : ");
    scanf("%d",&iValue);

    p = (int *) malloc(iSize * sizeof(int));

    if(p == NULL)
    {
        printf("Unable to alllocate memory");
        return -1;
    }

    printf("Enter %d elements\n",iSize);

    for(iCnt = 0; iCnt < iSize; iCnt++)
    {
        printf("Enter %d element : ",iCnt + 1);
        scanf("%d",&p[iCnt]);
    }

    bRet = Check(p,iSize, iValue);

    if(bRet == TRUE)
    {
        printf("%d is present.",iValue);
    }
    else
    {
        printf("%d is Absent.",iValue);
    }

    free(p);

    return 0;
}