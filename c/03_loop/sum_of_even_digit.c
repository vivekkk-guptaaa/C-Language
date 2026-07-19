#include <stdio.h>
int main(){
    int n;
    printf("Enter a number : ");
    scanf("%d", &n);
    int sum = 0;
    int lastdigit;
    while(n>0){
        lastdigit = n%10;

        if(lastdigit%2==0){
            sum = sum + lastdigit;

        }
        n = n/10;
    }
    printf("Sum of even digit is : %d ", sum);
    return 0;
}