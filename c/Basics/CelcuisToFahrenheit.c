#include<stdio.h>
int main()
{
    float c, f;
    printf("Enter celcuis to convert into Fahrenheit : ");
    scanf("%f", &c);
    f = (9.0/5*c)+32; // Use decimals when dividing integers.
    printf("Fahrenheit is : %.2f", f);
    return 0;
}