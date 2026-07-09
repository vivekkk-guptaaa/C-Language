#include <stdio.h>
int main(){
    int a, d, n;
    printf("Enter your 1st term : ");
    scanf("%d", &a);
    printf("Enter your common difference : ");
    scanf("%d", &d);
    printf("Enter number of terms : ");
    scanf("%d", &n);
    
// Print the current value of 'a'.
// After printing, increase 'a' by the common difference 'd'
// so that the next AP term is printed in the next iteration, without using the formula for the nth term.

    for(int i=1; i<=n; i++){
        printf("%d ", a);
        a = a+d;
    }
    return 0;
}