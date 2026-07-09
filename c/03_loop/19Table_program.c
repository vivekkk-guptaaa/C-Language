#include <stdio.h>
int main(){
    int n;
    printf("Enter your tbale number : ");
    scanf("%d", &n);

    for(int i=n; i<=n*10; i=i+n){
    printf("%d x %d = %d\n", n, i/n, i);
    }
    return 0;
}
