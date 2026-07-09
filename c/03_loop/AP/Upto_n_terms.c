#include <stdio.h>
int main(){
    int a, d, n;
    printf("Enter First term : ");
    scanf("%d", &a);
    printf("Enter Common difference : ");
    scanf("%d", &d);
    printf("Enter number of terms : ");
    scanf("%d", &n);

    for(int i = a; i<= a+(n-1)*d; i = i+d){
        printf("%d ", i); 
    }
    
    return 0;
}
