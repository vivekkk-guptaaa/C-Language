#include <stdio.h>
int main(){
    int a, r, n;
    printf("Enter First term : ");
    scanf("%d", &a);
    printf("Enter Common ratio : ");
    scanf("%d", &r);
    printf("Enter number of terms : ");
    scanf("%d", &n);

    for(int i=1; i<=n; i++){
        printf("%d, ", a);
        a = a * r;
    }

    return 0;
}