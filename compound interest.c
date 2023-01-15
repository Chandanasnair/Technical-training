#include <stdio.h>
#include<math.h>

int main()
{
    float r,t,ci;
    int p;
    printf("Enter the values of p,t,r");
    scanf("%d%f%f",&p,&t,&r);
    ci=p*(pow((1+r/100),t));
    printf("The simple intrest is=%f",ci);
    return 0;
}

