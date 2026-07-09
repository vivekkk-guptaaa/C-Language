#include <stdio.h>
int main()
{
    printf("Enter the units of electricity is consumed : ");
    float unit;
    scanf("%f", &unit);
    float bill = 8*unit;
    printf("Your electricity bill is : %.2f", bill);

    return 0;

}