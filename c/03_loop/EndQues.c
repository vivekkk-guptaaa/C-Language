#include <stdio.h>
int main(){
    int a,b;
    printf("Enter base : ");
    scanf("%d", &a);
    printf("Enter Power : ");
    scanf("%d", &b);
    int sum = 1;
    for(int i = 1; i<=b; i++){
        sum = sum*a;
        printf("%d\n",sum);
        
    }
    printf("%d raised to the power %d is : %d",a,b, sum);
    return 0;
}