#include <stdio.h>
int main()
{
    float num1;
    printf("Enter your 1st Number : ");
    scanf("%f", &num1);
    float num2;
    printf("Enter your 2nd Number : ");
    scanf("%f", &num2);
    float num3;
    printf("Enter your 3rd Number : ");
    scanf("%f", &num3);
    float num4;
    printf("Enter your 4th Number : ");
    scanf("%f", &num4);

    if (num1 > num2 && num1 > num3 && num1 > num4){

    printf("%.2f is greatest number",num1 );
    }
    if (num2 > num1 && num2 > num3 && num2 > num4){
    printf("%.2f is greatest number",num2 );
    }
    if (num3 > num1 && num3 > num2 && num3 > num4){
    printf("%.2f is greatest number",num3 );
    }
    if (num4 > num2 && num4 > num3 && num4 > num1){
    printf("%.2f is greatest number",num4 );
    }
    else{
        printf("\nbsdk same number kyu daal ra h 🤬");
    }
    return 0;
}