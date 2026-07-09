#include<stdio.h>
int main()
{
    int x;
    printf("Enter a Year : ");
    scanf("%d", &x);
    if(x%4==0){
        printf("it is a leap year");
    }
    else{
        printf("it is **NOT** a leap year");
    }
    return 0;
}