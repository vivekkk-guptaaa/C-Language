#include <stdio.h>
int main(){
    int x;
    printf("Enter a number : ");
    scanf("%d", &x);
    for(int i=1; i<=x; i=i+1){  //i=i+1 == i++
        printf("Hello\n");
    }

    return 0;
}