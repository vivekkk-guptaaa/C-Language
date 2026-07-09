#include<stdio.h>
int main()
{
    float p, r, t, si;
    printf("principle : ");
    scanf("%f", &p);
    printf("rate : ");
    scanf("%f", &r);
    printf("time : ");
    scanf("%f", &t);

    si = (p*r*t)/100;
    printf("Your SI is : %f", si);
    return 0;
}