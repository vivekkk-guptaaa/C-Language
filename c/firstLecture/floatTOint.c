#include <stdio.h>
int main()
{
    float x;
    printf("Enter your real number : ");
    scanf("%f", &x);
    int y = x;
    float z = x-y;
    printf ("The fraction of %.2f is : %.2f", x,z);



    return 0;
}