#include <stdio.h>
int main()
{
    int n;
    printf("Enter the number of terms you want to print : ");
    scanf("%d", &n);
    for (int i = 1; i <= n; i = i + 1)
    {
        if (i % 2 == 0)
        {
            printf("%d Even number\n", i);
        }
        else
        {
            printf("%d Odd number\n", i);
        }
    }
    int count = 0;
    for (int i = 1; i <= n; i++)
    {
        if (i % 2 == 0)
        {
            count = count + 1;
        }
    }
    printf("Total even number is : %d\n", count);

    int countodd = 0;
    for (int i = 1; i <= n; i++)
    {
        if (i % 2 != 0)
        {
            countodd = countodd + 1;
        }
    }
    printf("Total odd number is : %d\n", countodd);

    int sumeven = 0, sumodd = 0;
    for (int i = 1; i <= n; i++)
    {
        if (i % 2 == 0)
        {
            sumeven = sumeven + i;
        }
        else
        {
            sumodd = sumodd + i;
        }
    }
    printf("The sum of all even number is : %d", sumeven);
    printf("\nThe sum of all odd number is : %d", sumodd);

    int countboth = 0;
    for (int i = 1; i <= n; i++)
    {
        if (i % 3 == 0 && i % 5 == 0)
        {
            countboth++;
            
        }
    }
    printf("\nthe number is divisible by 3 and 5 both are : %d", countboth);
    return 0;
}