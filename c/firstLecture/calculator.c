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
    float sub = one - two;
    float mul = one * two;
    float div = one / two;
    printf("Addition is : %.2f", add);
    printf("\nSubtraction is : %.2f", sub);
    printf("\nMultiplication is : %.2f", mul);
    printf("\nDivision is : %.2f", div);

    
    return 0;
}