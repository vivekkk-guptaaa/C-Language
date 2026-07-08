#include <stdio.h>
int main()
{
    float hindi,english,chemistry,math,physics;
    printf("hindi marks : ");
    scanf("%f", &hindi);
    printf("english marks : ");
    scanf("%f", &english);
    printf("math marks : ");
    scanf("%f", &math);
    printf("chemistry marks : ");
    scanf("%f", &chemistry);
    printf("physics marks : ");
    scanf("%f", &physics);
//added after:
    float PE;
    printf("PE marks : ");
    scanf("%f", &PE);

    float total, avg, percentage;
    total = hindi+english+math+chemistry+physics+PE;
    avg = total/6;
    percentage = total*100/600;

    printf("                    --------Report Card--------\n");
    printf("                        total marks is : %.2f", total);
    printf("\n                   Final percentage is : %.2f%%", percentage);
    


    if(total>=360){
        printf("\n                               PASS");
    }
    else{
        printf("\n                                FAIL");
    }

    printf("\n\n\n                           Thankyou.\n\n\n");

    return 0;
}