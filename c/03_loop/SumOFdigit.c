#include <stdio.h>
int main(){
    int n;
    printf("Enter a digit : ");
    scanf("%d", &n);
    int sum = 0;
    int LastDigit;
    while(n>0){
        LastDigit = n % 10;
        sum = sum + LastDigit;
        n = n/10;
    }
    printf("%d", sum);
    return 0;
}