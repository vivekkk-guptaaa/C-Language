#include<stdio.h>
int main()
{
    printf("enter the lenght of rectangle : ");
    float length;
    scanf("%f",&length);
    printf("enter the breath of rectangle : ");
    float breadth;
    scanf("%f",&breadth);
    float a = length*breadth; // area
    printf("The area of rectangle is : %f", a);
    float p = length*2 + breadth*2; //perimeter
    printf("\nThe perimeter of rectangle is : %f",p);

    return 0;
}