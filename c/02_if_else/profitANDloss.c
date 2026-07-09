#include <stdio.h>
int main()
{
    int x;
    printf("Enter buy price : ");
    scanf("%d", &x);
    int y;
    printf("Enter sell price : ");
    scanf("%d", &y);
    int z = y - x;
    if (z > 0)
    {
        printf("You r in profit of");
        printf(" %d", z);
    }
    if (z == 0)
    {
        printf("No profit, No loss");
    }
    if (z < 0)
    {
        printf("You r in loss of : ");
        int a;
        a = z * (-1);
        printf(" %d", a);
    }
    return 0;
}