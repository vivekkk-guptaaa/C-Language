#include <stdio.h>
int main(){
    int a;
    printf("Enter the number upto which you want to print odd numbers : ");
    scanf("%d", &a);
    for(int i=1; i<=a; i++){
        if(i%2==0){  
            continue;
        }
        printf("%d ", i);
    }
    return 0;
}