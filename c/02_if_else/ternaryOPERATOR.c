#include <stdio.h>
int main()
{
    int x;
    printf("Enter a number : ");
    scanf("%d", &x);
    // usual method

    // if(x%2==0){
    //     printf("The number is Even");
    // }
    // else {
    //     printf("The number is odd");
    // }

    // ternary method
    // exp1 ? exp2 : exp3
    (x % 2 == 0) ? printf("The number is Even") : printf("The number is odd");

    return 0;
}