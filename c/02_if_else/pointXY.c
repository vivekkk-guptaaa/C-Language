#include <stdio.h>
int main()
{
    // int x, y;
    // printf("Enter x : ");
    // scanf("%d", &x);
    // printf("Enter y : ");
    // scanf("%d", &y);

    int x,y;
    printf("enter coordinates (x,y): ");
    scanf("%d %d", &x,&y);

    if(x==y && y== 0){
        printf("The points are on origin");

    }
    else if(x==0){
        printf("The point lies on y axis");
    }
    else if(y==0){
        printf("The point lies on x axis");
    }
    else {
        printf("tu kisi axis pe ni mere lvde pe dhikelun");
    }
    return 0;
}
