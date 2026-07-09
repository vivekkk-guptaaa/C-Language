#include<stdio.h>
int main()
{
    printf("Maths : ");
    float m;
    scanf("%f", &m);
    printf("physics : ");
    float p;
    scanf("%f", &p);
    printf("chemistry : ");
    float c;
    scanf("%f", &c);
    printf("hindi : ");
    float h;
    scanf("%f", &h);
    printf("english : ");
    float e; 
    scanf("%f", &e);
    float total = m+p+c+h+e;
    printf("your total number is : %.2f", total);
    float avg;
    avg = (m+p+c+h+e)/5;
    printf("\nyour avg marks is : %.2f", avg);
    float percentage;
    percentage = (m+p+c+h+e)/500*100;
    printf("\nYour percentage is : %.2f", percentage );

    return 0;

}