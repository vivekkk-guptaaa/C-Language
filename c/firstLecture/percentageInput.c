#include <stdio.h>
int main()
{
    float maths, physics, chemistry, hindi, english;
    printf("Enter Maths marks : ");
    scanf("%f", &maths);
    printf("Enter Physics marks : ");
    scanf("%f", &physics);
    printf("Enter chemistry marks : ");
    scanf("%f", &chemistry);
    printf("Enter hindi marks : ");
    scanf("%f", &hindi);
    printf("Enter english marks : ");
    scanf("%f", &english);
    float percentage =(maths+physics+chemistry+english+hindi)/500*100;
    printf("Your Percentage is : %f", percentage);
    return 0;
}