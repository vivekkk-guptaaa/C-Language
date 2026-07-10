#include <stdio.h>
int main(){
    //for GP 100, 50, 25....upto n terms
    float a,r;
    int n;
    printf("Enter your term from which you want to start : ");
    scanf("%f", &a);
    printf("Enter your common ratio : ");
    scanf("%f", &r);
    printf("Enter number of terms : ");
    scanf("%d", &n);

    for(int i = 1; i<=n; i++){
        printf("%.2f, ", a);
        a = a*r;
    }
    return 0;

}