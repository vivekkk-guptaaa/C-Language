#include <stdio.h>
int main()
{
    float balance, amount;

    printf("Enter current balance : ");
    scanf("%f", &balance);
    printf("\n----Bank Menu----\n");
    printf("1. Deposit \n");
    printf("2. withdrawl \n");
    printf("3. Check balance \n");
    printf("4. Exit \n");

    printf("Enter your choice :");
    int choice;
    scanf("%d", &choice);

    if (choice == 1)
    {
        printf("Enter Amount : ");
        scanf("%f", &amount);
        if (amount <= 0)
        {
            printf("Invalid Amount");
        }
        else
        {
            balance = balance + amount;
            printf("Deposit succesfully\n");
            printf("Your remaing balance is : %.2f", balance);
        }
    }
    else if (choice == 2)
    {
        printf("Enter Amount : ");
        scanf("%f", &amount);
        if (amount <= 0)
        {
            printf("Invalid Amount");
        }
        else if (amount > balance)
        {
            printf("Insufficient balance");
        }
        else
        {
            balance = balance - amount;
            printf("Withdrawl succesful\nYour current balance is : %.2f", balance);
        }
    }
    else if (choice == 3)
    {
        printf("Your balance is : %.2f", balance);
    }
    else
    {
        printf("Thankyou for visiting");
    }
    return 0;
}