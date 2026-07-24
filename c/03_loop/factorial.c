#include <stdio.h>
int main(){
    int x;
    printf("Enter a num : ");
    scanf("%d", &x);
    int factorial = 1;
    if(x<0){
        printf("Factorial of negative number is not defined");
    }
    for(int i = x; i > 0 ; i--){
        printf("%d ",i);
        if(i>1){
            printf("x ");
        }
        factorial = factorial * i;
    
    }
    printf("= %d", factorial);
    return 0;
}