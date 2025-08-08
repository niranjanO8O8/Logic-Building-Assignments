#include<stdio.h>

double CircleArea(float fRadius)
{
    if(fRadius < 0)
    {
        fRadius = - fRadius;
    }

    double dArea = 0.0;
    float PI = 3.14;

    dArea = PI * fRadius * fRadius;

    return dArea;
}

int main()
{
    float fValue = 0.0;
    double dRet = 0.0;

    printf("Enter Radius : ");
    scanf("%f",&fValue);

    dRet = CircleArea(fValue);

    printf("Area of Circle of radius %f is %.4f.",fValue,dRet);

    return 0;
}