#include <stdio.h>
int main(){
    int n, sum, a, b;
    printf("Enter nth term : ");
    scanf("%d", &n);
    a = 1;
    b = 1;
    sum = 1;
    for(int i = 1; i <= n-2; i++){
        sum = a+b;
        a = b;
        b = sum;
        
    }
    printf("Your nth term is : %d", sum);
    return 0;
}