#include<stdio.h>
int main()
{
    printf("Enter your 1st num : ");
    float one;
    scanf("%f", &one);
    printf("Enter your 2nd num : ");
    float two;
    scanf("%f", &two);
    float add = one + two;
    printf("Addition is : %.2f", add);
    float sub = one - two;
    printf("\nsubtraction is : %.2f", sub);
    float mul = one * two;
    printf("\nMultiplication is : %.2f", mul);
    float div = one / two;
    printf("\nDivision is : %.2f", div);

    
    return 0;
}