#include <stdio.h>
int main(){
    int a, d,n ;
    printf("Enter your term which you want to start with : ");
    scanf("%d", &a);   
    printf("Enter your common difference : ");
    scanf("%d", &d);
    

    for (int i=a; i>=0; i=i-d){
        printf("%d, ", i);
    }

    return 0;
}