//Sum of Reverse and given number:
#include <stdio.h>
int main(){
    int n;
    printf("Enter a number : ");
    scanf("%d", &n);
    int original= n;
    int r=0;
    while(n>0){
        r = r*10;
        r = r + (n%10);
        n = n/10;
    }
    int total = r + original;
    printf("Sum of reverse and given digit is : %d", total);
    return 0;
}