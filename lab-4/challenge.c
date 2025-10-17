#include <stdio.h>

int main() 
{
    int choice;
    double balance = 0.0, amount;

    while (1) 
    {
        printf("\n====== ATM MENU ======\n");
        printf("1. Check Balance\n");
        printf("2. Deposit Money\n");
        printf("3. Withdraw Money\n");
        printf("4. Exit\n");
        printf("Choose an option: ");
        scanf("%d", &choice);

        switch (choice) 
        {
            case 1:
                printf("Current Balance: %.2f\n", balance);
                break;

            case 2:
                printf("Enter amount to deposit: ");
                scanf("%lf", &amount);
                if (amount > 0) 
                {
                    balance += amount;
                    printf("Deposit successful.\n");
                } 
                else 
                {
                    printf("Invalid deposit amount.\n");
                }
                break;

            case 3:
                printf("Enter amount to withdraw: ");
                scanf("%lf", &amount);
                if (amount > 0 && amount <= balance) 
                {
                    balance -= amount;
                    printf("Withdrawal successful.\n");
                } 
                else if (amount > balance) 
                {
                    printf("Insufficient funds.\n");
                } 
                else 
                {
                    printf("Invalid withdrawal amount.\n");
                }
                break;

            case 4:
                printf("Thank you for using the ATM.\n");
                return 0;

            default:
                printf("Invalid option. Please try again.\n");
        }
    }
}
