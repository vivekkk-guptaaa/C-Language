#include <stdio.h>
int main()
{
    int x;
    printf("Enter 1st number ");
    scanf("%d", &x);
    int y;
    printf("Enter 2nd number ");
    scanf("%d", &y);
    int z;
    z = x % y;
    printf("your reminder is : %d", z);
    return 0; 

}