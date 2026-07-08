#include <stdio.h>
int main()
{
    float item1, quantity1, item2, quantity2, item3, quantity3;

    printf("Enter the cost of item one : ");
    scanf("%f", &item1);

    printf("Enter the quantity of item one : ");
    scanf("%f",&quantity1);

    printf("Enter the cost of item two : ");
    scanf("%f", &item2);

    printf("Enter the quantity of item two : ");
    scanf("%f",&quantity2);
    
    printf("Enter the cost of item three : ");
    scanf("%f", &item3);

    printf("Enter the quantity of item three : ");
    scanf("%f",&quantity3);

    float cost1 = item1*quantity1;
    float cost2 = item2*quantity2;
    float cost3 = item3 * quantity3;

    printf("The Cost of item one is : %.2f", cost1);
    printf("\nThe Cost of item two is : %.2f", cost2);
    printf("\nThe Cost of item three is : %.2f", cost3);
    
    float total, avg, product;
    avg = (cost1+cost2+cost3)/3;
    total = cost1+cost2+cost3;
    printf("\nTotal cost is : %.2f", total);
    printf("\nAvg Cost of item : %.2f", avg);

    return 0;
}