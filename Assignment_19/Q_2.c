#include<stdio.h>
#include<stdlib.h>

int Frequency(int Arr[],int iLength)
{
    int iCnt = 0;
    int iEvenFrequency = 0;
    int iOddFrequency = 0;
    int iDiff = 0;

    for(iCnt = 0; iCnt < iLength; iCnt++)
    {
        if((Arr[iCnt] % 2 == 0))
        {
            iEvenFrequency++;
        }
        else
        {
            iOddFrequency++;
        }
    }

    iDiff = iEvenFrequency - iOddFrequency;

    return iDiff;
}

int main()
{
    int iSize = 0;
    int iCnt = 0;
    int iRet = 0;

    int *p = NULL;

    printf("Enter the number of elements : ");
    scanf("%d",&iSize);

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

    iRet = Frequency(p,iSize);

    printf("Result is %d.",iRet);

    free(p);

    return 0;
}