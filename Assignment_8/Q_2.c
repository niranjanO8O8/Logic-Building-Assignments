#include<stdio.h>

double RectArea(float fWidth, float fHeight)
{
    if(fWidth < 0)
    {
        fWidth = - fWidth;
    }

    if(fHeight < 0)
    {
        fHeight = - fHeight;
    }

    double dArea = 0.0;

    dArea = fWidth * fHeight;

    return dArea;
}

int main()
{
    float fValue1 = 0.0;
    float fValue2 = 0.0;
    double dRet = 0.0;

    printf("Enter Width : ");
    scanf("%f",&fValue1);

    
    printf("Enter Height : ");
    scanf("%f",&fValue2);

    dRet = RectArea(fValue1,fValue2);

    printf("Area of Rectangle of width %.2f and Height %.2f is %.4f.",fValue1,fValue2,dRet);

    return 0;
}