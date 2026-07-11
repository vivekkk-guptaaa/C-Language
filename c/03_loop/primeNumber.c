#include <stdio.h>
int main()
{
    int n, a = 0;
    printf("Enter A Number : ");
    scanf("%d", &n);
    for (int i = 2; i <= n - 1; i++){
        if(n%i==0){
        a=1;
        break;
        }

    }
    if(n==1){
        printf("Your number is neither prime nor composite ");
    }
    else if(a==0){
        printf("Your number is prime");
    }
    else{
        printf("Your Number is composite");
    }
    return 0;
}