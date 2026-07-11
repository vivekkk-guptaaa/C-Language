
//-- -- -- -- --Reverse-- -- -- -- -- //

#include <stdio.h>
            int main()
{
    int a;
    printf("Enter your number : ");
    scanf("%d", &a);
    for (int i = a; i >= 0; i = i - 1)
    {
        printf("%d ", i);
    }
    return 0;
}

//-- -- -- -- -Addition-- -- -- -- -- //

#include <stdio.h>
            int main()
{
    int a, n = 0;
    printf("Enter a number : ");
    scanf("%d", &a);

    for (int i = 1; i <= a; i = i + 1)
    {
        if (i % 3 == 0)
        {
            n = n + 1;
        }
    }
    printf("%d ", n);

    return 0;
}

//-- -- -- -Multiplication-- -- -- -- //

#include <stdio.h>
         int main()
{
    int a;
    int y = 1;
    printf("Enter a number whose factorial you need : ");
    scanf("%d", &a);
    for (int i = a; i >= 1; i = i - 1)
    {

        y = y * i;
    }
    printf("%d ", y);
    return 0;
}

//---------square----------//

#include <stdio.h>
int main(){
    int n;
    int a;
    int i;
    int count = 0;
    printf("Enter your starting number : ");
    scanf("%d", &n);
    printf("Enter your ending number : ");
    scanf("%d",&a);
    for( i = n; i<=a; i=i+1){
        count = count+i*i*i;

    }
    printf("%d ", count);
    return 0;
}