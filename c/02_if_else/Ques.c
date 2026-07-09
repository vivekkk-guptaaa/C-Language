#include<stdio.h>
int main()
{
    int x;
    printf("Enter positive integer : ");
    scanf("%d", & x);
    if(x%5==0){
        printf("Yes, it is divisible by 5");

    }
    else{
        printf("No, it is not divisible by 5");
    }
    return 0;
}