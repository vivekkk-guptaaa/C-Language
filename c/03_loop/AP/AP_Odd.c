#include <stdio.h>
int main()
{
    int n;
    printf("Enter n term : ");
    scanf("%d",&n);

    for(int i=1; i<=1+(n-1)*2; i=i+2){ //an=a+(n-1)d where a=1, d=2
        printf("%d ", i);
    }
    return 0;
}