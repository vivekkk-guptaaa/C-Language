#include <stdio.h>
int main()
{
    float l;
    printf("Enter Length of rectangle : ");
    scanf("%f", &l);
    float b;
    printf("Enter Breadth of rectangle : ");
    scanf("%f", &b);

    float area = l * b;
    float perimeter = l * 2 + b * 2;

    if (area > perimeter)
    {
        printf("The area of rectangle is greater than it's perimeter");
        printf("\nThe area is : %.2f", area);
        printf("\nThe perimeter is : %.2f", perimeter);
    }
    if (area == perimeter)
    {
        printf("The area of rectangle is equals to it's perimeter");
        printf("\nThe area is : %.2f", area);
        printf("\nThe perimeter is : %.2f", perimeter);
    }
    if (area < perimeter)
    {
        printf("The area of rectangle is smaller than it's perimeter");
        printf("\nThe area is : %.2f", area);
        printf("\nThe perimeter is : %.2f", perimeter);
    }

    return 0;
}