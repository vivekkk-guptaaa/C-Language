#include <stdio.h>
int main(){
    int a, d, n ;
    printf("Enter your term which you want to start with : ");
    scanf("%d", &a);   
    printf("Enter your common difference : ");
    scanf("%d", &d);
    printf("Enter number of terms : ");
    scanf("%d", &n);
    
//print till zero (0)

    for (int i=1; a>0 ; i=i+1){
        printf("%d, ", a);
        a = a-d;
    }

    return 0;
}