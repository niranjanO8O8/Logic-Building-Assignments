#include<stdio.h>
#include<stdlib.h>

int LastOcc(int Arr[],int iLength, int iNO)
{
    int iCnt = 0;
    int iCheck = -1;

    for(iCnt = 0; iCnt < iLength; iCnt++)
    {
        if((Arr[iCnt] == iNO))
        {
            iCheck = iCnt;
        }
    }

    return iCheck;
}

int main()
{
    int iSize = 0;
    int iCnt = 0;
    int iRet = 0;
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

    iRet = LastOcc(p,iSize, iValue);

    if(iRet == -1)
    {
        printf("There is no such number.");
    }
    else
    {
        printf("Last occurenece of a number is %d.",iRet);
    }

    free(p);

    return 0;
}